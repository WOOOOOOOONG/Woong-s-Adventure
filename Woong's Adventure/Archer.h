#pragma once
#include <iostream>

#include "Soldier.h"

namespace adventure 
{
	class Archer : public Soldier 
	{
	public:
		Archer();
		Archer(int maxHealth, int curHealth, int strength, int nimble, int intelligence,
			int attack, int level);
		~Archer();

		virtual unsigned int LevelUp();
		virtual void Evolution();
		virtual unsigned int Skill() const;
	private:
	};
}