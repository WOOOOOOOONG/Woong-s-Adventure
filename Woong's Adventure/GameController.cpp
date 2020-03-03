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
		slime = 0; // ���̵� ������ ���� �ʹ� 2���� �����Ӹ� ����
		boolean firstJob = false;
		boolean secondJob = false;
		boolean thirdJob = false;

		// ���丮 ����
		gv.Story();
		gv.Border();

		// space ������ ���� ����
		while (key = _getch())
		{
			if (key == 32)
			{
				key = 0;
				gv.Explain();
				gv.Border();

				// space ������ ����ȭ��
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

		// ó�� ĳ���� �����ִ� ȭ��
		gv.Initial(job);

		boolean isWalk = false;
		// 30������ �ɶ����� ��� ���
		// 1/3 Ȯ���� ���� ����
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
			cout << "���� 10�� �Ǿ� ������ ������ �� �ֽ��ϴ�.";
			gv.gotoXY(4, 3);
			cout << "������ ����, ������, �ü� �� ���� �������� ������, �� �� ������ ������ ����ų �� �����ϴ�.";
			gv.gotoXY(4, 4);
			cout << "����� �⺻ ü���� ���� �⺻ ���ݷ��� ����, ������� ü���� ���� �⺻ ���ݷ��� ������,";
			gv.gotoXY(4, 5);
			cout << "������ ���Ͽ� �� � �������� ���մϴ�.";
			gv.gotoXY(4, 6);
			cout << "�ü��� ü���� ���� �⺻ ���ݷ°� ��ų �������� �ؼ��մϴ�.";
			gv.gotoXY(4, 7);
			cout << "� ������ ���ðڽ��ϱ� ?";
			gv.gotoXY(4, 8);
			cout << "1. ����";
			gv.gotoXY(4, 9);
			cout << "2. ������";
			gv.gotoXY(4, 10);
			cout << "3. �ü�";
			
			while (true)
			{
				gv.gotoXY(4, 11);
				cout << "����� ������ ? ";
				cin >> job;
				job = job + 1;

				if (job == 2)
				{
					user = new Warrior(user->GetMaxHealth(), user->GetCurHealth(), user->GetStrength(), user->GetNimble(),
						user->GetIntelligence(), user->GetAttack(), user->GetLevel());
					Sleep(1500);
					gv.gotoXY(4, 12);
					cout << "���縦 �����ϼ̽��ϴ�!";
					break;
				}
				else if (job == 3)
				{
					user = new Magician(user->GetMaxHealth(), user->GetCurHealth(), user->GetStrength(), user->GetNimble(),
						user->GetIntelligence(), user->GetAttack(), user->GetLevel());
					Sleep(1500);
					gv.gotoXY(4, 12);
					cout << "���縦 �����ϼ̽��ϴ�!";
					break;
				}
				else if (job == 4)
				{
					user = new Archer(user->GetMaxHealth(), user->GetCurHealth(), user->GetStrength(), user->GetNimble(),
						user->GetIntelligence(), user->GetAttack(), user->GetLevel());
					Sleep(1500);
					gv.gotoXY(4, 12);
					cout << "�ü��� �����ϼ̽��ϴ�!";
					break;
				}
				else
				{
					gv.gotoXY(4, 12);
					cout << "1, 2, 3�� �� �ϳ��� �����ֽʽÿ�";
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

		// ���� ����
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
			cout << "�巡���� �� ���ձ�!!";
			Sleep(2000);
			Dead();
			gv.SoldierDead(5, 15);
		}
		else
		{
			gv.MonsterCurHealth(monster->GetCurHealth(), curMonster);

			// ����(���� Ű�� A, ����/�ǰ� �� 3�� �� ��븦 �����ϰų� ��������
			key = 0;
			while (user->GetCurHealth() > 0 && monster->GetCurHealth() > 0)
			{
				while (key = _getch())
				{
					if (key == 'a' || key == 'A')
					{
						key = 0;

						// ���� ü�� ǥ��
						gv.SoldierCurHealth(user->GetCurHealth());
						gv.MonsterCurHealth(monster->GetCurHealth(), curMonster);

						// 3ȸ ���ݿ� 1ȸ ��ų �ߵ�
						if (attackCount % 3 == 0)
						{
							bSkill = true;
						}

						AttackMonster(bSkill);
						bSkill = false;
						attackCount++;

						// ���� �� ������ ü���� �� �������ٸ� �ο� ����
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
						// ���ݹ��� �� ���ٸ�
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
		cout << "���� 30�̻��� �Ǿ� �巡��� �ο� �� �ֽ��ϴ�. ���� ������";
		gv.gotoXY(5, 2);
		cout << "���� ����Դϴ�. �ο�ðڽ��ϱ�? Y/N";
		gv.gotoXY(5, 3);
		cin >> isFight;

		if (isFight == 'y' || isFight == 'Y')
		{
			gv.Fight(3);
			gv.gotoXY(5, 3);
			cout << "�ε�, ���� �巡����� �ο��� �����մϴ�";
			Sleep(2000);
			gv.gotoXY(5, 4);
			cout << "��";
			Sleep(2000);
			gv.gotoXY(5, 5);
			cout << "���";
			Sleep(2000);
			gv.gotoXY(5, 6);
			cout << "����� ������ �ϰ�!";
			Sleep(2000);
			gv.gotoXY(5, 7);
			cout << "�������� �ٽ� ��ȭ�� ã�ƿԽ��ϴ�";
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
			cout << "�� �����ϼ̽��ϴ�. ���� ����ġ ���� ����Դϴ�.";
			return 0;
		}
	}

	void GameController::SoldierStatus()
	{
		user->SetCurHealth(user->GetMaxHealth());
		gv.gotoXY(7, 8);
		cout << "���� : " << user->GetLevel();
		gv.gotoXY(7, 9);
		cout << "ü�� : " << user->GetMaxHealth();
		gv.gotoXY(7, 10);
		cout << "�� : " << user->GetStrength();
		gv.gotoXY(7, 11);
		cout << "��ø : " << user->GetNimble();
		gv.gotoXY(7, 12);
		cout << "���� : " << user->GetIntelligence();
		gv.gotoXY(7, 13);
		cout << "���ݷ� : " << user->GetAttack();
		gv.gotoXY(7, 14);
		cout << "���� : " << user->GetJobW();
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
		// ������ �̵�
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