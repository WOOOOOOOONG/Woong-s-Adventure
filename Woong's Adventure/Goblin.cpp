#include "Goblin.h"

namespace adventure {
	Goblin::Goblin() {
		SetMaxHealth(500);
		SetCurHealth(500);
		SetAttack(40);
		SetLevel(9);
		SetName("���");
	}

	Goblin::~Goblin() { }

	unsigned int Goblin::Attack()
	{
		std::cout << "����� ������ ����!!!" << std::endl;
		return GetAttack();
	}
}