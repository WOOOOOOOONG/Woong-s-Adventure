#pragma once
#include <iostream>

#include "Soldier.h"

namespace adventure {
	class Magician : public Soldier {
	public:
		Magician();
		Magician(int maxHealth, int curHealth, int strength, int nimble, int intelligence,
			int attack, int level);
		~Magician();

		virtual unsigned int LevelUp();
		virtual void Evolution();
		virtual unsigned int Skill() const;
	private:
	};
}