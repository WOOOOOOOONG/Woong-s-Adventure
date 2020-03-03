#pragma once
#include <windows.h>
#include <conio.h>

#include "Monster.h"
#include "Bear.h"
#include "Goblin.h"
#include "Slime.h"

#include "Soldier.h"
#include "Archer.h"
#include "Magician.h"
#include "Warrior.h"

#include "GameView.h"

using namespace std;

namespace adventure
{
	class GameController
	{
	public:
		GameController();
		~GameController();
		void AttackMonster(boolean bSkill);
		void AttackSoldier();
		unsigned int ChangeJob();
		unsigned int Dead();
		void Fight();
		int FightDragon();
		void GameStart();
		void SoldierStatus();
		void Setting();
		void Walk();

	private:
		GameView gv = GameView();
		Soldier* user = new Soldier();
		Monster* monster = new Monster();

		unsigned int curMonster;
		unsigned int job;
		int key;
		int slime;
	};
}
