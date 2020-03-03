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

		// 콘솔상에서 포인터 이동
		void gotoXY(int x, int y);

		// 부품 조합
		void Story();
		void Explain();
		void Initial(unsigned int job); // 기본 화면
		void Fight(unsigned int curMonster);
		void Walk(unsigned int job);
		void SoldierCurHealth(int health);
		void MonsterCurHealth(int health,int monster);

		// 그림
		void InitialConsole();
		void Border();
		void Ground();
		void Soldier(int x, int y);
		void SoldierWeapon(int num, int x, int y); // num을 이용해 무기의 종류를 받는다
		void SoldierWalk(int x, int y);
		void SoldierDead(int x, int y);
		void Monster(int num, int x, int y); // num을 이용해 몬스터의 종류를 입력받는다
		void Princess(int x, int y);
	};
}