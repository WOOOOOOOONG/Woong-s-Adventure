#include "Slime.h"

namespace adventure {
	Slime::Slime() {
		SetMaxHealth(100);
		SetCurHealth(100);
		SetAttack(5);
		SetLevel(4);
		SetName("슬라임");
	}

	Slime::~Slime() { }

	unsigned int Slime::Attack()
	{
		std::cout << "슬라임의 몸통박치기!" << std::endl;
		return GetAttack();
	}
}