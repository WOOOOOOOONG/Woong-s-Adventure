#include "Bear.h"

namespace adventure {
	Bear::Bear() {
		SetMaxHealth(300);
		SetCurHealth(300);
		SetAttack(15);
		SetLevel(7);
		SetName("��");
	}

	Bear::~Bear() { }

	unsigned int Bear::Attack()
	{
		std::cout << "���� �չ� �ֵθ���!!" << std::endl;
		return GetAttack();
	}
}