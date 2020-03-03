#include "Magician.h"

namespace adventure {
	Magician::Magician() { }

	Magician::Magician(int maxHealth, int curHealth, int strength, int nimble, int intelligence,
		int attack, int level)
	{
		SetMaxHealth(maxHealth);
		SetCurHealth(curHealth);
		SetStrength(strength);
		SetNimble(nimble);
		SetIntelligence(intelligence);
		SetAttack(attack);
		SetLevel(level);
		SetJobW("������");
	}

	Magician::~Magician() {}

	unsigned int Magician::LevelUp()
	{
		SetLevel(GetLevel() + 1);
		SetMaxHealth(GetMaxHealth() + 12);
		SetCurHealth(GetCurHealth() + 12);
		SetStrength(GetIntelligence() + 5);
		SetAttack(GetAttack() + 7);

		return GetLevel();
	}

	void Magician::Evolution()
	{
		if (GetLevel() >= 30)
		{
			std::cout << "30���� �̻� �޼��ϼ̽��ϴ� !\n"
				<< "������ ����� �������� '������'�Դϴ�." << std::endl;
			SetJobW("������");
		}
		else if (GetLevel() >= 20)
		{
			std::cout << "20���� �̻� �޼��ϼ̽��ϴ� !\n"
				<< "������ ����� �������� '����'�Դϴ�." << std::endl;
			SetJobW("����");
		}
	}

	unsigned int Magician::Skill() const
	{
		if (GetLevel() >= 30)
		{
			std::cout << GetJobW() << "�� ���׽ý�!!!!" << std::endl;
			return 450;
		}
		else if (GetLevel() >= 20)
		{
			std::cout << GetJobW() << "�ǽ�� ��Ʈ!!!" << std::endl;
			return 270;
		}
		else if (GetLevel() >= 10)
		{
			std::cout << GetJobW() << "�� ���� ��Ʈ!!" << std::endl;
			return 80;
		}
		else
		{
			std::cout << GetJobW() << "���� ��ų�� ����� �� �����ϴ�." << std::endl;
			return 0;
		}

		return 0;
	}
}