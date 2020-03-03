#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include <Windows.h>
#include <ctime>

using namespace std;

namespace adventure 
{
	class GameView
	{
	public:
		GameView();
		~GameView();

		// �ֻܼ󿡼� ������ �̵�
		void gotoXY(int x, int y);

		// ��ǰ ����
		void Story();
		void Explain();
		void Initial(unsigned int job); // �⺻ ȭ��
		void Fight(unsigned int curMonster);
		void Walk(unsigned int job);
		void SoldierCurHealth(int health);
		void MonsterCurHealth(int health,int monster);

		// �׸�
		void InitialConsole();
		void Border();
		void Ground();
		void Soldier(int x, int y);
		void SoldierWeapon(int num, int x, int y); // num�� �̿��� ������ ������ �޴´�
		void SoldierWalk(int x, int y);
		void SoldierDead(int x, int y);
		void Monster(int num, int x, int y); // num�� �̿��� ������ ������ �Է¹޴´�
		void Princess(int x, int y);
	};
}