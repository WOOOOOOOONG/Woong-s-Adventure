#include "Slime.h"

namespace adventure {
	Slime::Slime() {
		SetMaxHealth(100);
		SetCurHealth(100);
		SetAttack(5);
		SetLevel(4);
		SetName("������");
	}

	Slime::~Slime() { }

	unsigned int Slime::Attack()
	{
		std::cout << "�������� �����ġ��!" << std::endl;
		return GetAttack();
	}
}