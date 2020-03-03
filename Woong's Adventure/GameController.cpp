#include "GameController.h"

namespace adventure
{
	GameController::GameController()
	{
	}

	GameController::~GameController()
	{
	}

	void GameController::GameStart()
	{
		job = 1;
		slime = 0; // 난이도 조정을 위해 초반 2번은 슬라임만 나옴
		boolean firstJob = false;
		boolean secondJob = false;
		boolean thirdJob = false;

		// 스토리 설명
		gv.Story();
		gv.Border();

		// space 누르면 게임 설명
		while (key = _getch())
		{
			if (key == 32)
			{
				key = 0;
				gv.Explain();
				gv.Border();

				// space 누르면 다음화면
				while (key = _getch())
				{
					if (key == 32)
					{
						key = 0;
						break;
					}
				}
				break;
			}
		}

		// 처음 캐릭터 보여주는 화면
		gv.Initial(job);

		boolean isWalk = false;
		// 30레벨이 될때까지 계속 사냥
		// 1/3 확률로 몬스터 만남
		while(true)
		{
			Walk();
			if (isWalk)
			{
				isWalk = false;
				gv.Initial(job);
			}
			else
			{
				isWalk = true;
				gv.Walk(job);
			}

			if (user->GetLevel() >= 30)
			{
				int result = FightDragon();
				if (result > 0)
				{
					break;
				}
			}

			srand((unsigned int)time(NULL));
			int monsterMeet = rand() % 3;
			key = 0;

			if (monsterMeet == 0)
			{
				Fight();
				if (user->GetLevel() >= 10 && firstJob == false)
				{
					ChangeJob();
					firstJob = true;
				}
				else if(user->GetLevel() >= 20 && secondJob == false)
				{
					ChangeJob();
					secondJob = true;
				}
				else if (user->GetLevel() >= 30 && thirdJob == false)
				{
					ChangeJob();
					thirdJob = true;
				}
			}
		}
	}

	void GameController::AttackMonster(boolean bSkill)
	{
		int damage = 0;
		Setting();
		gv.gotoXY(40, 16);
		if (bSkill)
		{
			damage = user->Skill();
			monster->SetCurHealth(monster->GetCurHealth() - damage);
		}
		else
		{
			damage = user->Attack();
			monster->SetCurHealth(monster->GetCurHealth() - damage);
		}

		gv.SoldierCurHealth(user->GetCurHealth());
		gv.MonsterCurHealth(monster->GetCurHealth(), curMonster);
	}

	void GameController::AttackSoldier()
	{
		int damage = 0;
		Setting();
		gv.gotoXY(40, 16);
		damage = monster->Attack();

		user->SetCurHealth(user->GetCurHealth() - damage);

		gv.SoldierCurHealth(user->GetCurHealth());
		gv.MonsterCurHealth(monster->GetCurHealth(), curMonster);
	}

	unsigned int GameController::ChangeJob()
	{
		Setting();
		if (user->GetLevel() >= 10 && user->GetLevel() < 20)
		{
			gv.gotoXY(4, 2);
			cout << "레벨 10이 되어 직업을 선택할 수 있습니다.";
			gv.gotoXY(4, 3);
			cout << "직업은 전사, 마법사, 궁수 세 가지 직업군이 있으며, 한 번 선택한 직업은 돌이킬 수 없습니다.";
			gv.gotoXY(4, 4);
			cout << "전사는 기본 체력이 높고 기본 공격력이 높고, 마법사는 체력이 낮고 기본 공격력이 낮지만,";
			gv.gotoXY(4, 5);
			cout << "마법에 한하여 그 어떤 직업보다 강합니다.";
			gv.gotoXY(4, 6);
			cout << "궁수는 체력이 낮고 기본 공격력과 스킬 데미지가 준수합니다.";
			gv.gotoXY(4, 7);
			cout << "어떤 직업을 고르시겠습니까 ?";
			gv.gotoXY(4, 8);
			cout << "1. 전사";
			gv.gotoXY(4, 9);
			cout << "2. 마법사";
			gv.gotoXY(4, 10);
			cout << "3. 궁수";
			
			while (true)
			{
				gv.gotoXY(4, 11);
				cout << "당신의 선택은 ? ";
				cin >> job;
				job = job + 1;

				if (job == 2)
				{
					user = new Warrior(user->GetMaxHealth(), user->GetCurHealth(), user->GetStrength(), user->GetNimble(),
						user->GetIntelligence(), user->GetAttack(), user->GetLevel());
					Sleep(1500);
					gv.gotoXY(4, 12);
					cout << "전사를 선택하셨습니다!";
					break;
				}
				else if (job == 3)
				{
					user = new Magician(user->GetMaxHealth(), user->GetCurHealth(), user->GetStrength(), user->GetNimble(),
						user->GetIntelligence(), user->GetAttack(), user->GetLevel());
					Sleep(1500);
					gv.gotoXY(4, 12);
					cout << "법사를 선택하셨습니다!";
					break;
				}
				else if (job == 4)
				{
					user = new Archer(user->GetMaxHealth(), user->GetCurHealth(), user->GetStrength(), user->GetNimble(),
						user->GetIntelligence(), user->GetAttack(), user->GetLevel());
					Sleep(1500);
					gv.gotoXY(4, 12);
					cout << "궁수를 선택하셨습니다!";
					break;
				}
				else
				{
					gv.gotoXY(4, 12);
					cout << "1, 2, 3번 중 하나를 택해주십시오";
				}
			}
		
		}
		else
		{
			gv.gotoXY(4, 9);
			user->Evolution();
			Sleep(1500);
		}
		return 1;
	}

	unsigned int GameController::Dead()
	{
		gv.InitialConsole();
		gv.gotoXY(17, 4);
		user->Dead();
		gv.Ground();
		gv.Fight(curMonster);

		gv.SoldierDead(5, 15);
		return 0;
	}

	void GameController::Fight()
	{
		int attackCount = 0;
		boolean bSkill;

		// 몬스터 등장
		srand((unsigned int)time(NULL));
		curMonster = rand() % 4;

		if (slime < 2)
		{
			curMonster = 0;
			slime++;
		}

		switch (curMonster)
		{
		case 0:
			monster = new Slime();
			break;
		case 1:
			monster = new Bear();
			break;
		case 2:
			monster = new Goblin();
			break;
		default:
			break;
		}

		gv.InitialConsole();
		gv.Initial(job);
		gv.Fight(curMonster);
		gv.SoldierCurHealth(user->GetCurHealth());

		if (curMonster == 3)
		{
			Sleep(2000);
			gv.gotoXY(30, 15);
			cout << "드래곤의 불 내뿜기!!";
			Sleep(2000);
			Dead();
			gv.SoldierDead(5, 15);
		}
		else
		{
			gv.MonsterCurHealth(monster->GetCurHealth(), curMonster);

			// 전투(공격 키는 A, 공격/피격 시 3초 후 상대를 공격하거나 피해입음
			key = 0;
			while (user->GetCurHealth() > 0 && monster->GetCurHealth() > 0)
			{
				while (key = _getch())
				{
					if (key == 'a' || key == 'A')
					{
						key = 0;

						// 현재 체력 표시
						gv.SoldierCurHealth(user->GetCurHealth());
						gv.MonsterCurHealth(monster->GetCurHealth(), curMonster);

						// 3회 공격에 1회 스킬 발동
						if (attackCount % 3 == 0)
						{
							bSkill = true;
						}

						AttackMonster(bSkill);
						bSkill = false;
						attackCount++;

						// 공격 후 몬스터의 체력이 다 떨어졌다면 싸움 종료
						if (monster->GetCurHealth() <= 0)
						{
							attackCount = 0;
							for (unsigned int i = 0; i < monster->GetLevel(); i++)
							{
								user->LevelUp();
							}

							SoldierStatus();

							Sleep(2000);
							break;
						}

						Sleep(1000);

						AttackSoldier();
						// 공격받은 후 졌다면
						if (user->GetCurHealth() <= 0)
						{
							attackCount = 0;
							Dead();
							SoldierStatus();

							Sleep(2000);
							break;
						}

						Sleep(500);
						break;
					}
				}
			}
		}
	}

	int GameController::FightDragon()
	{
		char isFight;
		gv.gotoXY(5, 1);
		cout << "레벨 30이상이 되어 드래곤과 싸울 수 있습니다. 용은 굉장히";
		gv.gotoXY(5, 2);
		cout << "강한 상대입니다. 싸우시겠습니까? Y/N";
		gv.gotoXY(5, 3);
		cin >> isFight;

		if (isFight == 'y' || isFight == 'Y')
		{
			gv.Fight(3);
			gv.gotoXY(5, 3);
			cout << "두둥, 드디어 드래곤과의 싸움을 시작합니다";
			Sleep(2000);
			gv.gotoXY(5, 4);
			cout << "쿵";
			Sleep(2000);
			gv.gotoXY(5, 5);
			cout << "쿠궁";
			Sleep(2000);
			gv.gotoXY(5, 6);
			cout << "용사의 마무리 일격!";
			Sleep(2000);
			gv.gotoXY(5, 7);
			cout << "마을에는 다시 평화가 찾아왔습니다";
			Sleep(2000);

			gv.InitialConsole();
			gv.Initial(job);
			gv.Ground();
			gv.Princess(30, 6);

			return 1;
		}
		else
		{
			gv.gotoXY(5, 3);
			cout << "잘 생각하셨습니다. 용은 만만치 않은 상대입니다.";
			return 0;
		}
	}

	void GameController::SoldierStatus()
	{
		user->SetCurHealth(user->GetMaxHealth());
		gv.gotoXY(7, 8);
		cout << "레벨 : " << user->GetLevel();
		gv.gotoXY(7, 9);
		cout << "체력 : " << user->GetMaxHealth();
		gv.gotoXY(7, 10);
		cout << "힘 : " << user->GetStrength();
		gv.gotoXY(7, 11);
		cout << "민첩 : " << user->GetNimble();
		gv.gotoXY(7, 12);
		cout << "지력 : " << user->GetIntelligence();
		gv.gotoXY(7, 13);
		cout << "공격력 : " << user->GetAttack();
		gv.gotoXY(7, 14);
		cout << "직업 : " << user->GetJobW();
	}

	void GameController::Setting()
	{
		gv.InitialConsole();
		gv.Initial(job);
		gv.Ground();
		gv.Fight(curMonster);
	}

	void GameController::Walk()
	{
		// 앞으로 이동
		while (key = _getch())
		{
			if (key == 77)
			{
				key = 0;
				break;
			}
		}
	}
}