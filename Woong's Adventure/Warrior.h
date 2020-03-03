#pragma once
#include <iostream>

#include "Soldier.h"

namespace adventure {
	class Warrior : public Soldier {
	public:
		Warrior();
		Warrior(int maxHealth, int curHealth, int strength, int nimble, int intelligence,
			int attack, int level);
		~Warrior();

		virtual unsigned int LevelUp();
		virtual void Evolution();
		virtual unsigned int Skill() const;
	private:
	};
}