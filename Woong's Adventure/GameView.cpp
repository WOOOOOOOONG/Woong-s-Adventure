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

	// ��ǰ ����

	void GameView::Story()
	{
		InitialConsole();
		gotoXY(4, 2);
		cout << "���� ���丮";

		gotoXY(8, 5);
		cout << "Woong ���Ϸ���� ��ȭ�ο� �����Դϴ�.";
		gotoXY(8, 6);
		cout << "�ֺ� ������ ���Ͱ� ���縮�� �� ������ ���� ��ü ���� ���� ����, ��κ��� ������ �����ӵ� �̾���";
		gotoXY(8, 7);
		cout << "��Ȥ ���� ����� ���� ���� ���� ���Ͱ� �ֱ� ������, �� ��ü ���� �����ӿ� ���� ������ ���⵵ �ϰ�";
		gotoXY(8, 8);
		cout << "ũ�� ���ݼ��� ���� �ʾ� ���������� �ʾҽ��ϴ�. ";
		gotoXY(8, 9);
		cout << "������ �׷� ���� ���ڱ� ���� ��Ÿ�����ϴ�.";
		gotoXY(8, 10);
		cout << "���� ���� ���� �����̸�, �ٸ� ���͵��� �����Ѵٴ� ������ �ֽ��ϴ�.";
		gotoXY(8, 11);
		cout << "������ ���� ������ ���������� �����, ���� ����� ��ü ���� �������׽��ϴ�.";
		gotoXY(8, 12);
		cout << "���� ���� Woong ���Ϸ����� �հ��� ������ ��� ������� ���� ���� ������ ȣ��ȣ���� �ϰ� �ֽ��ϴ�.";
		gotoXY(8, 13);
		cout << "��ȭ�� ������� ����� �ܼ��� ����� �ư�, ���� ��ġ�ϱ� ���� ������ ������ �ο��� �ɾ����� �����";
		gotoXY(8, 14);
		cout << "�����߽��ϴ�. �׷��� ����, ������ ��� '��'�� ȯ���� '����'�� �¾���ϴ�.";
		gotoXY(8, 15);
		cout << "������ ����� ���� ��⸦ �ٶ��� ������ �θ���� ���̰� ���� ȯ������ ����鿡�� ����� �ٳ���ϴ�.";
		gotoXY(8, 16);
		cout << "������ ���̰� 15���� �Ǵ� ��, �б� ���� ������ ������ ���̴� ������� �ٸ� ����� ������ ���ݰ�,";
		gotoXY(8, 17);
		cout << "�� �θ�Կ��� �ڽ��� ������ ��� ���� ȯ������ ������ϴ�.";
		gotoXY(8, 18);
		cout << "���� �� ���� ����̶� ���� ���̴� ���� ����濡 ���� �غ� ������, �� �ȿ� ���� ������ ���ϰ�,";
		gotoXY(8, 19);
		cout << "�Ƿ��� ���ָ� ���� ������ ��ȭ�� ���� ��θ� ��ڴٰ� �����ϰ� ����濡 �������ϴ�.";
		gotoXY(8, 21);
		cout << "��� �Ϸ��� space�� �Է��Ͻÿ�..";
	}

	void GameView::Explain()
	{
		InitialConsole();

		gotoXY(4, 2);
		cout << "���� ����";
		gotoXY(8, 5);
		cout << "���ӿ��� ����(Level)�� �����մϴ�. ���� �����ϴ� �ְ��� ����� ������ 22��� �ҹ��� ������,";
		gotoXY(8, 6);
		cout << "���� ���� 30�����Դϴ�.";
		gotoXY(8, 7);
		cout << "���̴� ������ ��� ���� ȯ���� ��ŭ, ������� Ȯ���� �ٸ� ���� �ӵ��� ���� �ֽ��ϴ�. ������ �� ������ ��Ƶ�";
		gotoXY(8, 8);
		cout << "���� 4���� �ϰ�, ������ ���� ��´ٸ� 7����, ����� ��´ٸ� 9������ ����մϴ�.";
		gotoXY(8, 9);
		cout << "������ ù ������ 1����������, ������, ��, ����� ������ ��´ٸ� �ݼ� 30������ �Ǿ� ";
		gotoXY(8, 10);
		cout << "���� ���� �� ���� ���Դϴ�.";
		gotoXY(8, 11);
		cout << "���̴� ���� ���� �� �ְ� �� ������ ������ ��Ǯ�� ���İ��� ������ �� ���Դϴ�. �ȴٰ� ���͸� ���� ���� �ְ�";
		gotoXY(8, 12);
		cout << "������ ���� ���� ������, ������ �ȴٸ� �ο��� ���� �� ���� ���Դϴ�.";
		gotoXY(8, 13);
		cout << "������ ������ 30������ �Ǵ� ����, �뿡�� ������ �� �ֽ��ϴ�. �ٸ�, ���� �ſ� ���� ��ü�̴�";
		gotoXY(8, 14);
		cout << "�����ϰ� ���ñ� �ٶ��ϴ�.";
		gotoXY(8, 15);
		cout << "���� �Ǵ� ��� ������ ���̴� �״´ٸ� ������ 5��ŭ �����մϴ�.";
		gotoXY(8, 16);
		cout << "3ȸ ���� �� ���� ������ ��ų�� ����մϴ�. ��ų�� �� �������� �ٸ���, �ʺ��� ���� ��ų�� �ֽ��ϴ�.";
		gotoXY(8, 17);
		cout << "���� 30���� ���Ŀ��� ������ ���� �ƴմϴ�. �������� �������� �뿡�� ��ų �� ������, ������ ��� �װԵ˴ϴ�.";
		gotoXY(8, 18);
		cout << "���̿� �Բ� ������ ���� ���ֿ� ���踦 ���� �� �ֱ⸦ �ٶ��ϴ�.";
		gotoXY(8, 20);
		cout << "��� �Ϸ��� space�� �Է��Ͻÿ�..";
	}

	// ��簡 ��Ǯ �ȴ� �̹���
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
		cout << "���� ü�� : " << health;
	}

	void GameView::MonsterCurHealth(int health, int monster)
	{
		switch (monster)
		{
		case 0:
			gotoXY(84, 17);
			cout << "���� ü�� : " << health;
			break;
		case 1:
			gotoXY(87, 11);
			cout << "���� ü�� : " << health;
			break;
		case 2:
			gotoXY(90, 8);
			cout << "���� ü�� : " << health;
			break;
		case 3:
			gotoXY(60, 15);
			cout << "���� ü�� : " << health;
			break;
		default:
			break;
		}
	}


	// ���� ����
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

	// ��ǰ

	void GameView::InitialConsole()
	{
		system("cls");
	}

	// �ֿܼ��� ��ǥ �ű�� �Լ�
	// ���ٴ��� ���� 26��, ���θ� ���ڷ� ��� ä����� 120���� ���ڰ� �ʿ����� ����
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
		// �Ӹ�
		gotoXY(x + 4, y + 1);
		std::cout << "########" << std::endl;
		gotoXY(x + 3, y + 2);
		std::cout << "########" << std::endl;

		// ����
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

		// ��
		gotoXY(x + 4, y + 3);
		cout << "��";
		gotoXY(x + 4, y + 4);
		cout << "-";
		gotoXY(x + 7, y + 3);
		cout << "��";
		gotoXY(x + 8, y + 4);
		cout << "-";

		// ��
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
		cout << "��\n��\n��\n��\n��\n��\n��\n��\n��\n��\n��\n��\n��\n��\n��\n��\n��\n��\n��\n��\n��\n��\n��\n��\n��\n��\n��\n��";
		gotoXY(0, 29);
		cout << "========================================================================================================================";
		gotoXY(118, 1);
		cout << "��";
		gotoXY(118, 2);
		cout << "��";
		gotoXY(118, 3);
		cout << "��";
		gotoXY(118, 4);
		cout << "��";
		gotoXY(118, 5);
		cout << "��";
		gotoXY(118, 6);
		cout << "��";
		gotoXY(118, 7);
		cout << "��";
		gotoXY(118, 8);
		cout << "��";
		gotoXY(118, 9);
		cout << "��";
		gotoXY(118, 10);
		cout << "��";
		gotoXY(118, 11);
		cout << "��";
		gotoXY(118, 12);
		cout << "��";
		gotoXY(118, 13);
		cout << "��";
		gotoXY(118, 14);
		cout << "��";
		gotoXY(118, 15);
		cout << "��";
		gotoXY(118, 16);
		cout << "��";
		gotoXY(118, 17);
		cout << "��";
		gotoXY(118, 18);
		cout << "��";
		gotoXY(118, 19);
		cout << "��";
		gotoXY(118, 20);
		cout << "��";
		gotoXY(118, 21);
		cout << "��";
		gotoXY(118, 22);
		cout << "��";
		gotoXY(118, 23);
		cout << "��";
		gotoXY(118, 24);
		cout << "��";
		gotoXY(118, 25);
		cout << "��";
		gotoXY(118, 20);
		cout << "��";
		gotoXY(118, 26);
		cout << "��";
		gotoXY(118, 27);
		cout << "��";
		gotoXY(118, 28);
		cout << "��";

		gotoXY(0, 0);
	}

	void GameView::SoldierWeapon(int num, int x, int y)
	{
		switch (num)
		{
		case 1: // �ʺ��� ��
			gotoXY(x + 10, y + 7);
			cout << "��";
			gotoXY(x + 11, y + 7);
			cout << "/";
			gotoXY(x + 13, y + 6);
			cout << "/";
			gotoXY(x + 13, y + 6);
			cout << "/";
			gotoXY(x + 14, y + 6);
			cout << "��";
			gotoXY(x + 15, y + 6);
			cout << "/";
			gotoXY(x + 14, y + 5);
			cout << "��";
			gotoXY(x + 12, y + 4);
			cout << "��";
			gotoXY(x + 11, y + 4);
			cout << "/";
			gotoXY(x + 11, y + 5);
			cout << "��";
			gotoXY(x + 11, y + 6);
			cout << "/";

			gotoXY(x + 13, y + 4);
			cout << "/";
			gotoXY(x + 15, y + 3);
			cout << "_";
			gotoXY(x + 15, y + 4);
			cout << "��";
			gotoXY(x + 15, y + 5);
			cout << "/";
			gotoXY(0, 0);
			break;
		case 2: // �˻�
			gotoXY(x + 10, y + 7);
			cout << "��";
			gotoXY(x + 11, y + 7);
			cout << "/";
			gotoXY(x + 13, y + 6);
			cout << "/";
			gotoXY(x + 13, y + 6);
			cout << "/";
			gotoXY(x + 14, y + 6);
			cout << "��";
			gotoXY(x + 15, y + 6);
			cout << "/";
			gotoXY(x + 14, y + 5);
			cout << "��";
			gotoXY(x + 12, y + 4);
			cout << "��";
			gotoXY(x + 11, y + 4);
			cout << "/";
			gotoXY(x + 11, y + 5);
			cout << "��";
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
		case 3: // ������
			gotoXY(x + 10, y + 7);
			cout << "��";

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
		case 4: // �ü�
			gotoXY(x + 12, y + 3);
			cout << "��";
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
			cout << "��";
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
		// �Ӹ�
		gotoXY(x + 4, y + 1);
		std::cout << "########" << std::endl;
		gotoXY(x + 3, y + 2);
		std::cout << "########" << std::endl;

		// ����
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

		// ��
		gotoXY(x + 4, y + 3);
		cout << "��";
		gotoXY(x + 4, y + 4);
		cout << "-";
		gotoXY(x + 7, y + 3);
		cout << "��";
		gotoXY(x + 8, y + 4);
		cout << "-";

		// ��
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
		cout << "��";
		gotoXY(0, 0);
	}
	
	void GameView::SoldierDead(int x, int y)
	{
		// �Ӹ�
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

		// ����
		gotoXY(x + 5, y + 6);
		cout << "��";
		gotoXY(x + 6, y + 6);
		cout << "��";

		gotoXY(x + 9, y + 8);
		cout << "|";
		gotoXY(x + 9, y + 7);
		cout << "|";

		gotoXY(x + 5, y + 9);
		cout << "��";
		gotoXY(x + 6, y + 9);
		cout << "��";

		// ��
		gotoXY(x + 6, y + 8);
		cout << "��";
		gotoXY(x + 6, y + 7);
		cout << "��";

		// ��
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
		cout << "��";
		gotoXY(x + 14, y + 9);
		cout << "��";
		gotoXY(x + 15, y + 9);
		cout << "��";

		gotoXY(x + 19, y + 8);
		cout << "|";
		gotoXY(x + 18, y + 7);
		cout << "_";
		gotoXY(x + 19, y + 7);
		cout << "|";

		gotoXY(x + 17, y + 6);
		cout << "��";
		gotoXY(x + 15, y + 6);
		cout << "��";
		gotoXY(x + 14, y + 6);
		cout << "��";

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
	
	// 0 : ������, 1 : ��, 2 : ���, 3 : ��, 4 : ������ ����
	void GameView::Monster(int num, int x, int y)
	{
		switch (num)
		{
		case 0: // ������
			//        *
			//       *
			//		***
			//     *   *
			//    *���� *
			//     *   *
			//      ***
			// y �� + 9
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
			cout << "��"; 
			gotoXY(x + 6, y + 7);
			cout << "��";
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
		case 1: // ��                      
			//                     *************
			//                  ****           ********
			//                 *                       *
			//               **                         ****
			//        *******                               ****
			//       *   ��                                  ****
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
			cout << "*   ��                                  ****";
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
		case 2: // ���
			//         
			//                        ****
			//	                ***  *    *  ***
			//	                 ** *�� �� * **
			//	   *****            * ��   *
			//	    *****            *��   **
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

			// ��
			gotoXY(x + 21, y + 6);
			cout << "****";
			gotoXY(x + 15, y + 7);
			cout << "***  *    *  ***";
			gotoXY(x + 16, y + 8);
			cout << "** *�� �� * **";
			gotoXY(x + 2, y + 9);
			cout << "*****            * ��   *";
			gotoXY(x + 3, y + 10);
			cout << "*****            *��   **";
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

			// ����
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

			// �ٸ�
			gotoXY(x + 26, y + 20);
			cout << "****";
			gotoXY(x + 19, y + 20);
			cout << "****";
			break;
		case 3: // ��
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
			cout << "�ƹ� �ϵ� �Ͼ�� �ʾҽ��ϴ�.";
		default:
			break;
		}
	}

	void GameView::Princess(int x, int y)
	{
		//       *   *   *
		//        *  *  *
		//      _��*****��
		//    ��          ��
		//    |             |
		//    |  |  _  _ |  |
		//   ��  | �� �� |  ��   
		//  ��   |   ��  |    ��
		//  |        ��        |
		//  |     ��____��     |
		//  |    ___| |___     |
		//   ��_|         |___��
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
		cout << "_��*****��";
		gotoXY(x + 5, y + 4);
		cout << "��         ��";
		gotoXY(x + 5, y + 5);
		cout << "|           |";
		gotoXY(x + 5, y + 6);
		cout << "|  | _  _  ||";
		gotoXY(x + 4, y + 7);
		cout << "��  | �� �� | ��";
		gotoXY(x + 3, y + 8);
		cout << "��   |  ��   |   ��";
		gotoXY(x + 2, y + 9);
		cout << "|        ��        |";
		gotoXY(x + 2, y + 10);
		cout << "|     ��____��     |";
		gotoXY(x + 2, y + 11);
		cout << "|    ___| |___     |";
		gotoXY(x + 3, y + 12);
		cout << "��_|         |___��";
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