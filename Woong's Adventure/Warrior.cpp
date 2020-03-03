#include "Warrior.h"

namespace adventure {
	Warrior::Warrior() { }

	Warrior::Warrior(int maxHealth, int curHealth, int strength, int nimble, int intelligence,
		int attack, int level)
	{
		SetMaxHealth(maxHealth);
		SetCurHealth(curHealth);
		SetStrength(strength);
		SetNimble(nimble);
		SetIntelligence(intelligence);
		SetAttack(attack);
		SetLevel(level);
		SetJobW("����");
	}

	Warrior::~Warrior() {}

	unsigned int Warrior::LevelUp()
	{
		SetLevel(GetLevel() + 1);
		SetMaxHealth(GetMaxHealth() + 20);
		SetCurHealth(GetCurHealth() + 20);
		SetStrength(GetStrength() + 5);
		SetAttack(GetAttack() + 10);

		return GetLevel();
	}

	void Warrior::Evolution() 
	{
		if (GetLevel() >= 30)
		{
			std::cout << "30���� �̻� �޼��ϼ̽��ϴ� !\n" 
				<< "������ ����� �������� '�����'�Դϴ�." << std::endl;
			SetJobW("�����");
		}
		else if (GetLevel() >= 20)
		{
			std::cout << "20���� �̻� �޼��ϼ̽��ϴ� !\n"
				<< "������ ����� �������� '����'�Դϴ�." << std::endl;
			SetJobW("����");
		}
	}

	unsigned int Warrior::Skill() const
	{
		if (GetLevel() >= 30) 
		{
			std::cout << GetJobW() << "�� ����!!!!" << std::endl;
			return 300;
		}
		else if (GetLevel() >= 20)
		{
			std::cout << GetJobW() << "�� �巡�� �ξ�!!!" << std::endl;
			return 200;
		}
		else if (GetLevel() >= 10)
		{
			std::cout << GetJobW() << "�� ������ ����Ʈ!!" << std::endl;
			return 70;
		}
		else
		{
			std::cout << GetJobW() << "���� ��ų�� ����� �� �����ϴ�." << std::endl;
			return 0;
		}

		return 0;
	}
}