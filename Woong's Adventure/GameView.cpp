#include "GameView.h"

using namespace std;
namespace adventure 
{
	GameView::GameView()
	{
	}

	GameView::~GameView()
	{
	}

	// 부품 조합

	void GameView::Story()
	{
		InitialConsole();
		gotoXY(4, 2);
		cout << "게임 스토리";

		gotoXY(8, 5);
		cout << "Woong 아일랜드는 평화로운 세계입니다.";
		gotoXY(8, 6);
		cout << "주변 곳곳에 몬스터가 도사리고 긴 하지만 몬스터 개체 수도 거의 없고, 대부분은 연약한 슬라임들 이었고";
		gotoXY(8, 7);
		cout << "간혹 곰과 고블린 같이 조금 강한 몬스터가 있긴 하지만, 그 개체 수는 슬라임에 비해 현저히 적기도 하고";
		gotoXY(8, 8);
		cout << "크게 공격성을 띄지 않아 위협적이지 않았습니다. ";
		gotoXY(8, 9);
		cout << "하지만 그런 와중 갑자기 용이 나타났습니다.";
		gotoXY(8, 10);
		cout << "용은 전설 속의 생물이며, 다른 몬스터들을 조종한다는 전설이 있습니다.";
		gotoXY(8, 11);
		cout << "포악한 용은 몬스터을 공격적으로 만들고, 곰과 고블린의 개체 수를 증가시켰습니다.";
		gotoXY(8, 12);
		cout << "현재 용은 Woong 아일랜드의 왕가를 인질로 잡고 사람으로 변해 궁전 내에서 호의호식을 하고 있습니다.";
		gotoXY(8, 13);
		cout << "평화에 물들었던 세계는 단숨에 어둠이 됐고, 용을 퇴치하기 위해 수많은 용사들이 싸움을 걸었지만 빈번히";
		gotoXY(8, 14);
		cout << "실패했습니다. 그러던 와중, 전설의 용사 '웅'의 환생인 '웅이'가 태어났습니다.";
		gotoXY(8, 15);
		cout << "하지만 평범한 삶을 살기를 바랐던 웅이의 부모님은 웅이가 웅의 환생임을 사람들에게 숨기고 다녔습니다.";
		gotoXY(8, 16);
		cout << "하지만 웅이가 15살이 되던 해, 학교 전투 수업에 참여한 웅이는 남들과는 다른 재능이 있음을 깨닫고,";
		gotoXY(8, 17);
		cout << "곧 부모님에게 자신이 전설의 용사 웅의 환생임을 들었습니다.";
		gotoXY(8, 18);
		cout << "피할 수 없는 운명이라 여긴 웅이는 곧장 여행길에 떠날 준비를 했으며, 성 안에 갇힌 왕족을 구하고,";
		gotoXY(8, 19);
		cout << "또래인 공주를 구해 세계의 평화와 공주 모두를 얻겠다고 다짐하게 여행길에 떠났습니다.";
		gotoXY(8, 21);
		cout << "계속 하려면 space를 입력하시오..";
	}

	void GameView::Explain()
	{
		InitialConsole();

		gotoXY(4, 2);
		cout << "게임 설명";
		gotoXY(8, 5);
		cout << "게임에는 레벨(Level)이 존재합니다. 현재 존재하는 최고의 용사의 레벨이 22라는 소문이 있지만,";
		gotoXY(8, 6);
		cout << "용은 무려 30레벨입니다.";
		gotoXY(8, 7);
		cout << "웅이는 전설의 용사 웅의 환생인 만큼, 남들과는 확연히 다른 성장 속도를 갖고 있습니다. 슬라임 한 마리를 잡아도";
		gotoXY(8, 8);
		cout << "무려 4업을 하고, 포악한 곰을 잡는다면 7레벨, 고블린을 잡는다면 9레벨이 상승합니다.";
		gotoXY(8, 9);
		cout << "웅이의 첫 시작은 1레벨이지만, 슬라임, 곰, 고블린을 꾸준히 잡는다면 금세 30레벨이 되어 ";
		gotoXY(8, 10);
		cout << "용을 잡을 수 있을 것입니다.";
		gotoXY(8, 11);
		cout << "웅이는 용을 잡을 수 있게 될 때까지 수없이 수풀을 헤쳐가며 여행을 할 것입니다. 걷다가 몬스터를 만날 수도 있고";
		gotoXY(8, 12);
		cout << "만나지 않을 수도 있지만, 만나게 된다면 싸움은 피할 수 없을 것입니다.";
		gotoXY(8, 13);
		cout << "웅이의 레벨이 30레벨이 되는 순간, 용에게 도전할 수 있습니다. 다만, 용은 매우 강한 개체이니";
		gotoXY(8, 14);
		cout << "신중하게 가시길 바랍니다.";
		gotoXY(8, 15);
		cout << "몬스터 또는 용과 전투를 벌이다 죽는다면 레벨이 1만큼 감소합니다.";
		gotoXY(8, 16);
		cout << "용사는 1/3 확률로 스킬을 사용합니다. 스킬은 각 직업별로 다르며, 초보자 또한 스킬이 있습니다.";
		gotoXY(8, 17);
		cout << "용은 30레벨 이후에만 만나는 것이 아닙니다. 이전에도 지나가는 용에게 들킬 수 있으며, 만나는 즉시 죽게됩니다.";
		gotoXY(8, 18);
		cout << "웅이와 함께 모험을 떠나 공주와 세계를 구할 수 있기를 바랍니다.";
		gotoXY(8, 20);
		cout << "계속 하려면 space를 입력하시오..";
	}

	// 용사가 수풀 걷는 이미지
	void GameView::Initial(unsigned int job)
	{
		InitialConsole();
		Ground();
		Soldier(7, 17);
		SoldierWeapon(job, 7, 17);
	}

	void GameView::Walk(unsigned int job)
	{
		InitialConsole();
		Ground();
		SoldierWalk(7, 17);
		SoldierWeapon(job, 7, 17);
	}

	void GameView::SoldierCurHealth(int health)
	{
		gotoXY(7, 15);
		cout << "현재 체력 : " << health;
	}

	void GameView::MonsterCurHealth(int health, int monster)
	{
		switch (monster)
		{
		case 0:
			gotoXY(84, 17);
			cout << "현재 체력 : " << health;
			break;
		case 1:
			gotoXY(87, 11);
			cout << "현재 체력 : " << health;
			break;
		case 2:
			gotoXY(90, 8);
			cout << "현재 체력 : " << health;
			break;
		case 3:
			gotoXY(60, 15);
			cout << "현재 체력 : " << health;
			break;
		default:
			break;
		}
	}


	// 몬스터 등장
	void GameView::Fight(unsigned int curMonster)
	{
		if (curMonster == 0) 
		{
			Monster(curMonster, 85, 16);
		}
		else if (curMonster == 1)
		{
			Monster(curMonster, 70, 12);
		}
		else if (curMonster == 2)
		{
			Monster(curMonster, 80, 5);
		}
		else if (curMonster == 3)
		{
			Monster(curMonster, 60, 0);
		}
		else if (curMonster == 4)
		{
			Monster(curMonster, 40, 12);
		}
	}

	// 부품

	void GameView::InitialConsole()
	{
		system("cls");
	}

	// 콘솔에서 좌표 옮기는 함수
	// 땅바닥은 개행 26번, 가로를 문자로 모두 채우려면 120개의 문자가 필요함을 참고
	void GameView::gotoXY(int x, int y)
	{
		COORD pos = { x,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	}

	void GameView::Ground()
	{
		gotoXY(0, 26);
		std::cout << "========================================================================================================================";
	}

	void GameView::Soldier(int x, int y)
	{
		// 머리
		gotoXY(x + 4, y + 1);
		std::cout << "########" << std::endl;
		gotoXY(x + 3, y + 2);
		std::cout << "########" << std::endl;

		// 얼굴형
		gotoXY(x + 2, y + 3);
		cout << "|";
		gotoXY(x + 2, y + 4);
		cout << "|";
		gotoXY(x + 3, y + 5);
		cout << "-------";
		gotoXY(x + 10, y + 4);
		cout << "|";
		gotoXY(x + 10, y + 3);
		cout << "|";

		// 눈
		gotoXY(x + 4, y + 3);
		cout << "┚";
		gotoXY(x + 4, y + 4);
		cout << "-";
		gotoXY(x + 7, y + 3);
		cout << "┕";
		gotoXY(x + 8, y + 4);
		cout << "-";

		// 몸
		gotoXY(x + 1, y + 6);
		cout << "|";
		gotoXY(x + 2, y + 6);
		cout << "_";
		gotoXY(x + 3, y + 7);
		cout << "|";
		gotoXY(x + 3, y + 6);
		cout << "|";
		gotoXY(x + 3, y + 8);
		cout << "|";
		gotoXY(x + 3, y + 8);
		cout << "|";
		gotoXY(x + 4, y + 8);
		cout << "_";
		gotoXY(x + 5, y + 8);
		cout << "_";
		gotoXY(x + 6, y + 8);
		cout << "_";
		gotoXY(x + 7, y + 8);
		cout << "_";
		gotoXY(x + 8, y + 8);
		cout << "_";
		gotoXY(x + 9, y + 8);
		cout << "|";
		gotoXY(x + 9, y + 7);
		cout << "|";
		gotoXY(x + 9, y + 6);
		cout << "|";
		gotoXY(x + 11, y + 6);
		cout << "|";
		gotoXY(x + 10, y + 6);
		cout << "_";
		gotoXY(x + 6, y + 8);
		cout << "|";
		gotoXY(0, 0);
	}

	void GameView::Border() 
	{
		gotoXY(0, 0);
		cout << "========================================================================================================================";
		gotoXY(0, 1);
		cout << "∥\n∥\n∥\n∥\n∥\n∥\n∥\n∥\n∥\n∥\n∥\n∥\n∥\n∥\n∥\n∥\n∥\n∥\n∥\n∥\n∥\n∥\n∥\n∥\n∥\n∥\n∥\n∥";
		gotoXY(0, 29);
		cout << "========================================================================================================================";
		gotoXY(118, 1);
		cout << "∥";
		gotoXY(118, 2);
		cout << "∥";
		gotoXY(118, 3);
		cout << "∥";
		gotoXY(118, 4);
		cout << "∥";
		gotoXY(118, 5);
		cout << "∥";
		gotoXY(118, 6);
		cout << "∥";
		gotoXY(118, 7);
		cout << "∥";
		gotoXY(118, 8);
		cout << "∥";
		gotoXY(118, 9);
		cout << "∥";
		gotoXY(118, 10);
		cout << "∥";
		gotoXY(118, 11);
		cout << "∥";
		gotoXY(118, 12);
		cout << "∥";
		gotoXY(118, 13);
		cout << "∥";
		gotoXY(118, 14);
		cout << "∥";
		gotoXY(118, 15);
		cout << "∥";
		gotoXY(118, 16);
		cout << "∥";
		gotoXY(118, 17);
		cout << "∥";
		gotoXY(118, 18);
		cout << "∥";
		gotoXY(118, 19);
		cout << "∥";
		gotoXY(118, 20);
		cout << "∥";
		gotoXY(118, 21);
		cout << "∥";
		gotoXY(118, 22);
		cout << "∥";
		gotoXY(118, 23);
		cout << "∥";
		gotoXY(118, 24);
		cout << "∥";
		gotoXY(118, 25);
		cout << "∥";
		gotoXY(118, 20);
		cout << "∥";
		gotoXY(118, 26);
		cout << "∥";
		gotoXY(118, 27);
		cout << "∥";
		gotoXY(118, 28);
		cout << "∥";

		gotoXY(0, 0);
	}

	void GameView::SoldierWeapon(int num, int x, int y)
	{
		switch (num)
		{
		case 1: // 초보자 검
			gotoXY(x + 10, y + 7);
			cout << "＼";
			gotoXY(x + 11, y + 7);
			cout << "/";
			gotoXY(x + 13, y + 6);
			cout << "/";
			gotoXY(x + 13, y + 6);
			cout << "/";
			gotoXY(x + 14, y + 6);
			cout << "＼";
			gotoXY(x + 15, y + 6);
			cout << "/";
			gotoXY(x + 14, y + 5);
			cout << "＼";
			gotoXY(x + 12, y + 4);
			cout << "＼";
			gotoXY(x + 11, y + 4);
			cout << "/";
			gotoXY(x + 11, y + 5);
			cout << "＼";
			gotoXY(x + 11, y + 6);
			cout << "/";

			gotoXY(x + 13, y + 4);
			cout << "/";
			gotoXY(x + 15, y + 3);
			cout << "_";
			gotoXY(x + 15, y + 4);
			cout << "｜";
			gotoXY(x + 15, y + 5);
			cout << "/";
			gotoXY(0, 0);
			break;
		case 2: // 검사
			gotoXY(x + 10, y + 7);
			cout << "＼";
			gotoXY(x + 11, y + 7);
			cout << "/";
			gotoXY(x + 13, y + 6);
			cout << "/";
			gotoXY(x + 13, y + 6);
			cout << "/";
			gotoXY(x + 14, y + 6);
			cout << "＼";
			gotoXY(x + 15, y + 6);
			cout << "/";
			gotoXY(x + 14, y + 5);
			cout << "＼";
			gotoXY(x + 12, y + 4);
			cout << "＼";
			gotoXY(x + 11, y + 4);
			cout << "/";
			gotoXY(x + 11, y + 5);
			cout << "＼";
			gotoXY(x + 11, y + 6);
			cout << "/";

			gotoXY(x + 13, y + 4);
			cout << "/";
			gotoXY(x + 15, y + 3);
			cout << "/";
			gotoXY(x + 16, y + 2);
			cout << "/";
			gotoXY(x + 17, y + 1);
			cout << "_";
			gotoXY(x + 18, y + 2);
			cout << "|";
			gotoXY(x + 15, y + 5);
			cout << "/";
			gotoXY(x + 16, y + 4);
			cout << "/";
			gotoXY(x + 18, y + 3);
			cout << "/";
			gotoXY(0, 0);
			break;
		case 3: // 마법사
			gotoXY(x + 10, y + 7);
			cout << "＼";

			gotoXY(x + 11, y + 6);
			cout << "/";
			gotoXY(x + 12, y + 5);
			cout << "/";
			gotoXY(x + 13, y + 4);
			cout << "/";
			gotoXY(x + 14, y + 3);
			cout << "/";
			gotoXY(x + 15, y + 2);
			cout << "/";

			gotoXY(x + 12, y + 7);
			cout << "/";
			gotoXY(x + 13, y + 6);
			cout << "/";
			gotoXY(x + 14, y + 5);
			cout << "/";
			gotoXY(x + 15, y + 4);
			cout << "/";
			gotoXY(x + 16, y + 3);
			cout << "/";
			gotoXY(x + 17, y + 2);
			cout << "/";

			gotoXY(x + 17, y + 1);
			cout << "_";
			gotoXY(x + 18, y + 1);
			cout << "|";
			gotoXY(x + 16, y + 1);
			cout << "|";
			gotoXY(x + 17, y + 0);
			cout << "_";
			gotoXY(0, 0);
			break;
		case 4: // 궁수
			gotoXY(x + 12, y + 3);
			cout << "＼";
			gotoXY(x + 13, y + 4);
			cout << "|";
			gotoXY(x + 13, y + 5);
			cout << "|";
			gotoXY(x + 13, y + 6);
			cout << "/";
			gotoXY(x + 12, y + 7);
			cout << "/";
			gotoXY(x + 11, y + 8);
			cout << "/";

			gotoXY(x + 13, y + 2);
			cout << "_";

			gotoXY(x + 14, y + 3);
			cout << "＼";
			gotoXY(x + 15, y + 4);
			cout << "|";
			gotoXY(x + 15, y + 5);
			cout << "|";
			gotoXY(x + 15, y + 6);
			cout << "/";
			gotoXY(x + 14, y + 7);
			cout << "/";
			gotoXY(x + 13, y + 8);
			cout << "/";

			gotoXY(x + 12, y + 8);
			cout << "_";
			break;
		default:
			break;
		}
	}
	
	void GameView::SoldierWalk(int x, int y)
	{
		// 머리
		gotoXY(x + 4, y + 1);
		std::cout << "########" << std::endl;
		gotoXY(x + 3, y + 2);
		std::cout << "########" << std::endl;

		// 얼굴형
		gotoXY(x + 2, y + 3);
		cout << "|";
		gotoXY(x + 2, y + 4);
		cout << "|";
		gotoXY(x + 3, y + 5);
		cout << "-------";
		gotoXY(x + 10, y + 4);
		cout << "|";
		gotoXY(x + 10, y + 3);
		cout << "|";

		// 눈
		gotoXY(x + 4, y + 3);
		cout << "┚";
		gotoXY(x + 4, y + 4);
		cout << "-";
		gotoXY(x + 7, y + 3);
		cout << "┕";
		gotoXY(x + 8, y + 4);
		cout << "-";

		// 몸
		gotoXY(x + 1, y + 6);
		cout << "|";
		gotoXY(x + 2, y + 6);
		cout << "_";
		gotoXY(x + 3, y + 7);
		cout << "|";
		gotoXY(x + 3, y + 6);
		cout << "|";
		gotoXY(x + 2, y + 8);
		cout << "/";
		gotoXY(x + 3, y + 8);
		cout << "_";
		gotoXY(x + 4, y + 8);
		cout << "_";
		gotoXY(x + 6, y + 8);
		cout << "_";
		gotoXY(x + 7, y + 8);
		cout << "_";
		gotoXY(x + 8, y + 8);
		cout << "_";
		gotoXY(x + 9, y + 8);
		cout << "|";
		gotoXY(x + 9, y + 7);
		cout << "|";
		gotoXY(x + 9, y + 6);
		cout << "|";
		gotoXY(x + 11, y + 6);
		cout << "|";
		gotoXY(x + 10, y + 6);
		cout << "_";

		gotoXY(x + 5, y + 8);
		cout << "/";
		gotoXY(x + 6, y + 8);
		cout << "＼";
		gotoXY(0, 0);
	}
	
	void GameView::SoldierDead(int x, int y)
	{
		// 머리
		gotoXY(x + 3, y + 8);
		cout << "#";
		gotoXY(x + 3, y + 7);
		cout << "#";
		gotoXY(x + 3, y + 6);
		cout << "#";
		gotoXY(x + 3, y + 5);
		cout << "#";
		gotoXY(x + 4, y + 9);
		cout << "#";
		gotoXY(x + 4, y + 8);
		cout << "#";
		gotoXY(x + 4, y + 7);
		cout << "#";
		gotoXY(x + 4, y + 6);
		cout << "#";

		// 얼굴형
		gotoXY(x + 5, y + 6);
		cout << "ㅡ";
		gotoXY(x + 6, y + 6);
		cout << "ㅡ";

		gotoXY(x + 9, y + 8);
		cout << "|";
		gotoXY(x + 9, y + 7);
		cout << "|";

		gotoXY(x + 5, y + 9);
		cout << "ㅡ";
		gotoXY(x + 6, y + 9);
		cout << "ㅡ";

		// 눈
		gotoXY(x + 6, y + 8);
		cout << "∥";
		gotoXY(x + 6, y + 7);
		cout << "∥";

		// 몸
		gotoXY(x + 10, y + 9);
		cout << "|";
		gotoXY(x + 11, y + 10);
		cout << "|";
		gotoXY(x + 12, y + 10);
		cout << "_";
		gotoXY(x + 13, y + 10);
		cout << "|";
		gotoXY(x + 12, y + 9);
		cout << "|";

		gotoXY(x + 13, y + 9);
		cout << "ㅡ";
		gotoXY(x + 14, y + 9);
		cout << "ㅡ";
		gotoXY(x + 15, y + 9);
		cout << "ㅡ";

		gotoXY(x + 19, y + 8);
		cout << "|";
		gotoXY(x + 18, y + 7);
		cout << "_";
		gotoXY(x + 19, y + 7);
		cout << "|";

		gotoXY(x + 17, y + 6);
		cout << "ㅡ";
		gotoXY(x + 15, y + 6);
		cout << "ㅡ";
		gotoXY(x + 14, y + 6);
		cout << "ㅡ";

		gotoXY(x + 13, y + 5);
		cout << "|";
		gotoXY(x + 13, y + 4);
		cout << "|";
		gotoXY(x + 12, y + 3);
		cout << "_";
		gotoXY(x + 11, y + 5);
		cout << "|";
		gotoXY(x + 11, y + 4);
		cout << "|";
	}
	
	// 0 : 슬라임, 1 : 곰, 2 : 고블린, 3 : 용, 4 : 만나지 않음
	void GameView::Monster(int num, int x, int y)
	{
		switch (num)
		{
		case 0: // 슬라임
			//        *
			//       *
			//		***
			//     *   *
			//    *ºº *
			//     *   *
			//      ***
			// y 끝 + 9
			gotoXY(x + 9, y + 3);
			cout << "*";
			gotoXY(x + 8, y + 4);
			cout << "*";
			gotoXY(x + 6, y + 5);
			cout << "* * *";
			gotoXY(x + 4, y + 6);
			cout << "*";
			gotoXY(x + 3, y + 7);
			cout << "*"; 
			gotoXY(x + 5, y + 7);
			cout << "【"; 
			gotoXY(x + 6, y + 7);
			cout << "【";
			gotoXY(x + 4, y + 8);
			cout << "*";
			gotoXY(x + 6, y + 9);
			cout << "* * *";
			gotoXY(x + 12, y + 8);
			cout << "*";
			gotoXY(x + 12, y + 7);
			cout << "*";
			gotoXY(x + 12, y + 6);
			cout << "*";
			break;
		case 1: // 곰                      
			//                     *************
			//                  ****           ********
			//                 *                       *
			//               **                         ****
			//        *******                               ****
			//       *   ⊙                                  ****
			//       **                                    ***
			//        ********                            *
			//                *        ***********         *
			//                 *       *          *        *
			//                 *      *            *       *
			//                **      *           **      *
			//               **********          **********
			gotoXY(x + 20, y + 1);
			cout << "*************";
			gotoXY(x + 17, y + 2);
			cout << "****           ********";
			gotoXY(x + 16, y + 3);
			cout << "*                       *";
			gotoXY(x + 14, y + 4);
			cout << "**                         ****";
			gotoXY(x + 7, y + 5);
			cout << "*******                               ****";
			gotoXY(x + 6, y + 6);
			cout << "*   ⊙                                  ****";
			gotoXY(x + 6, y + 7);
			cout << "**                                    ***";
			gotoXY(x + 7, y + 8);
			cout << "********                            *";
			gotoXY(x + 15, y + 9);
			cout << "*        ***********         *";
			gotoXY(x + 16, y + 10);
			cout << "*       *          *        *";
			gotoXY(x + 16, y + 11);
			cout << "*      *            *       *";
			gotoXY(x + 15, y + 12);
			cout << "**      *           **      *";
			gotoXY(x + 14, y + 13);
			cout << "**********          **********";
			
			break;
		case 2: // 고블린
			//         
			//                        ****
			//	                ***  *    *  ***
			//	                 ** *⊙ ⊙ * **
			//	   *****            * ひ   *
			//	    *****            *∩   **
			//	     *****            ****   *
			//	      *****      ***          *
			//	       *****     ** *         *
			//	         **     **  *         *
			//	          ** **     *         *
			// 	           **       *         *
			//	                    *  * * *  *
			//	                    *  *   *  *
			//	                    *  *   *  * 
			//	            	    ****   ****

			// 얼굴
			gotoXY(x + 21, y + 6);
			cout << "****";
			gotoXY(x + 15, y + 7);
			cout << "***  *    *  ***";
			gotoXY(x + 16, y + 8);
			cout << "** *⊙ ⊙ * **";
			gotoXY(x + 2, y + 9);
			cout << "*****            * ひ   *";
			gotoXY(x + 3, y + 10);
			cout << "*****            *∩   **";
			gotoXY(x + 4, y + 11);
			cout << "*****            ****   *";
			gotoXY(x + 5, y + 12);
			cout << "*****      ***          *";
			gotoXY(x + 6, y + 13);
			cout << "*****     ** *         *";
			gotoXY(x + 8, y + 14);
			cout << " **   **            *";
			gotoXY(x + 9, y + 15);
			cout << " ** **    *         *";
			gotoXY(x + 10, y + 16);
			cout << " **      *         *";

			// 몸통
			gotoXY(x + 19, y + 19);
			cout << "*";
			gotoXY(x + 19, y + 18);
			cout << "*";
			gotoXY(x + 19, y + 17);
			cout << "*";
			gotoXY(x + 19, y + 16);
			cout << "*";
			gotoXY(x + 19, y + 15);
			cout << "*";
			gotoXY(x + 19, y + 14);
			cout << "*";
			gotoXY(x + 19, y + 13);
			cout << "*";

			gotoXY(x + 22, y + 19);
			cout << "*";
			gotoXY(x + 22, y + 18);
			cout << "*";
			gotoXY(x + 22, y + 17);
			cout << "*";

			gotoXY(x + 26, y + 19);
			cout << "*";
			gotoXY(x + 26, y + 18);
			cout << "*";
			gotoXY(x + 26, y + 17);
			cout << "*";

			gotoXY(x + 29, y + 19);
			cout << "*";
			gotoXY(x + 29, y + 18);
			cout << "*";
			gotoXY(x + 29, y + 17);
			cout << "*";
			gotoXY(x + 29, y + 16);
			cout << "*";
			gotoXY(x + 29, y + 15);
			cout << "*";
			gotoXY(x + 29, y + 14);
			cout << "*";
			gotoXY(x + 29, y + 13);
			cout << "*";
			gotoXY(x + 29, y + 12);
			cout << "*";
			gotoXY(x + 28, y + 11);
			cout << "*";

			// 다리
			gotoXY(x + 26, y + 20);
			cout << "****";
			gotoXY(x + 19, y + 20);
			cout << "****";
			break;
		case 3: // 용
			//                           *   *
			//                           *   *
			//                          * # # *  
			//                          *     *
			//                           *   *
			//           ***             *   *             ***
			//          *   **     *    *     *    *     **   *
			//         *      ***** ****       **** *****      *
			//        *                                         *
			//       *                                           *
			//      *                                             *
			//     * ***         *                    *         *** *
			//    * *   *       * ****           ****  *       *   * *
			//   *       *******      *         *       *******       *
			//                         **     **
			//                           *   *
			//                            * *
			//                            * *
			//                            * *
			//                             *
			//                             * * * *
			gotoXY(x + 25, y + 1);
			cout << "*   *";
			gotoXY(x + 25, y + 2);
			cout << "*   *";
			gotoXY(x + 24, y + 3);
			cout << "* # # *  ";
			gotoXY(x + 24, y + 4);
			cout << "*     *";
			gotoXY(x + 25, y + 5);
			cout << "*   *";
			gotoXY(x + 9, y + 6);
			cout << "***             *   *             ***";
			gotoXY(x + 8, y + 7);
			cout << "*   **     *    *     *    *     **   *";
			gotoXY(x + 7, y + 8);
			cout << "*      ***** ****       **** *****      *";
			gotoXY(x + 6, y + 9);
			cout << "*                                         *";
			gotoXY(x + 5, y + 10);
			cout << "*                                           *";
			gotoXY(x + 4, y + 11);
			cout << "*                                             *";
			gotoXY(x + 3, y + 12);
			cout << "* ***         *                    *         *** *";
			gotoXY(x + 2, y + 13);
			cout << "* *   *       * ****           ****  *       *   * *";
			gotoXY(x + 1, y + 14);
			cout << "*       *******      *         *       *******       *";
			gotoXY(x + 23, y + 15);
			cout << "**     **";
			gotoXY(x + 25, y + 16);
			cout << "*   *";
			gotoXY(x + 26, y + 17);
			cout << "* *";
			gotoXY(x + 26, y + 18);
			cout << "* *";
			gotoXY(x + 26, y + 19);
			cout << "* *";
			gotoXY(x + 27, y + 20);
			cout << "*";
			gotoXY(x + 27, y + 21);
			cout << "* * * *";
			break;
		case 4:
			gotoXY(x, y);
			cout << "아무 일도 일어나지 않았습니다.";
		default:
			break;
		}
	}

	void GameView::Princess(int x, int y)
	{
		//       *   *   *
		//        *  *  *
		//      _／*****＼
		//    ／          ＼
		//    |             |
		//    |  |  _  _ |  |
		//   ／  | ロ ロ |  ＼   
		//  ／   |   く  |    ＼
		//  |        º        |
		//  |     ＼____／     |
		//  |    ___| |___     |
		//   ＼_|         |___／
		//      | |     | |
		//      |_|     |_|
		//        |     | 
		//        |     |
		//        |_____|
		//        |_| |_|
		//

		gotoXY(x + 7, y + 1);
		cout << "*   *   *";
		gotoXY(x + 8, y + 2);
		cout << "*  *  *";
		gotoXY(x + 6, y + 3);
		cout << "_／*****＼";
		gotoXY(x + 5, y + 4);
		cout << "／         ＼";
		gotoXY(x + 5, y + 5);
		cout << "|           |";
		gotoXY(x + 5, y + 6);
		cout << "|  | _  _  ||";
		gotoXY(x + 4, y + 7);
		cout << "／  | ロ ロ | ＼";
		gotoXY(x + 3, y + 8);
		cout << "／   |  く   |   ＼";
		gotoXY(x + 2, y + 9);
		cout << "|        º        |";
		gotoXY(x + 2, y + 10);
		cout << "|     ＼____／     |";
		gotoXY(x + 2, y + 11);
		cout << "|    ___| |___     |";
		gotoXY(x + 3, y + 12);
		cout << "＼_|         |___／";
		gotoXY(x + 6, y + 13);
		cout << "| |     | |";
		gotoXY(x + 6, y + 14);
		cout << "|_|     |_|";
		gotoXY(x + 8, y + 15);
		cout << "|     | ";
		gotoXY(x + 8, y + 16);
		cout << "|     | ";
		gotoXY(x + 8, y + 17);
		cout << "|_____|";
		gotoXY(x + 8, y + 18);
		cout << "|_| |_|";
	}
}
