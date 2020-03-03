#include "Goblin.h"

namespace adventure {
	Goblin::Goblin() {
		SetMaxHealth(500);
		SetCurHealth(500);
		SetAttack(40);
		SetLevel(9);
		SetName("°íºí¸°");
	}

	Goblin::~Goblin() { }

	unsigned int Goblin::Attack()
	{
		std::cout << "°íºí¸°ÀÇ ¸ùµÕÀÌ ÂòÁú!!!" << std::endl;
		return GetAttack();
	}
}