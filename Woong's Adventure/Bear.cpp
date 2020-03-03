#include "Bear.h"

namespace adventure {
	Bear::Bear() {
		SetMaxHealth(300);
		SetCurHealth(300);
		SetAttack(15);
		SetLevel(7);
		SetName("°õ");
	}

	Bear::~Bear() { }

	unsigned int Bear::Attack()
	{
		std::cout << "°õÀÇ ¾Õ¹ß ÈÖµÎ¸£±â!!" << std::endl;
		return GetAttack();
	}
}