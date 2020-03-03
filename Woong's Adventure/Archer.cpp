#include "Archer.h"

namespace adventure {
	Archer::Archer() { }

	Archer::Archer(int maxHealth, int curHealth, int strength, int nimble, int intelligence,
		int attack, int level)
	{
		SetMaxHealth(maxHealth);
		SetCurHealth(curHealth);
		SetStrength(strength);
		SetNimble(nimble);
		SetIntelligence(intelligence);
		SetAttack(attack);
		SetLevel(level);
		SetJobW("�ü�");
	}

	Archer::~Archer() {}

	unsigned int Archer::LevelUp()
	{
		SetLevel(GetLevel() + 1);
		SetMaxHealth(GetMaxHealth() + 12);
		SetCurHealth(GetCurHealth() + 12);
		SetStrength(GetNimble() + 5);
		SetAttack(GetAttack() + 13);

		return GetLevel();
	}

	void Archer::Evolution()
	{
		if (GetLevel() >= 30)
		{
			std::cout << "30���� �̻� �޼��ϼ̽��ϴ� !\n"
				<< "������ ����� �������� '�ű�'�Դϴ�." << std::endl;
			SetJobW("�ű�");
		}
		else if (GetLevel() >= 20)
		{
			std::cout << "20���� �̻� �޼��ϼ̽��ϴ� !\n"
				<< "������ ����� �������� '���ݼ�'�Դϴ�." << std::endl;
			SetJobW("���ݼ�");
		}
	}

	unsigned int Archer::Skill() const
	{
		if (GetLevel() >= 30)
		{
			std::cout << GetJobW() << "�� ��������!!!!" << std::endl;
			return 450;
		}
		else if (GetLevel() >= 20)
		{
			std::cout << GetJobW() << "�� ���ο� ��!!!" << std::endl;
			return 250;
		}
		else if (GetLevel() >= 10)
		{
			std::cout << GetJobW() << "�� ���� �ϰ�!!" << std::endl;
			return 90;
		}
		else
		{
			std::cout << "���� ��ų�� ����� �� �����ϴ�." << std::endl;
			return 0;
		}

		return 0;
	}
}