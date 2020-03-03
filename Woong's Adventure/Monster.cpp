#include "Monster.h"

namespace adventure {
	Monster::Monster() { }

	Monster::~Monster() { }

	unsigned int Monster::Attack()
	{
		return GetAttack();
	}

	unsigned int Monster::Receive(int receive)
	{
		SetCurHealth(GetCurHealth() - receive);
		return GetCurHealth();
	}

	unsigned int Monster::Dead()
	{
		return GetLevel();
	}

	void Monster::Status()
	{
		std::cout << "������ ������ ����մϴ�.\n";
		std::cout << "�̸� : " + name
			<< "\n���� : " << level
			<< "\nü�� : " << maxHealth
			<< "\n���ݷ� : " << attack << std::endl;
	}

	void Monster::Heal()
	{
		SetCurHealth(GetMaxHealth());
	}

	int Monster::GetMaxHealth()
	{
		return maxHealth;
	}

	int Monster::GetCurHealth()
	{
		return curHealth;
	}

	unsigned int Monster::GetAttack()
	{
		return attack;
	}

	unsigned int Monster::GetLevel()
	{
		return level;
	}

	std::string Monster::GetName()
	{
		return name;
	}

	void Monster::SetMaxHealth(int num)
	{
		maxHealth = num;
	}

	void Monster::SetCurHealth(int num)
	{
		curHealth = num;
	}

	void Monster::SetAttack(int num)
	{
		attack = num;
	}

	void Monster::SetLevel(int num)
	{
		level = num;
	}

	void Monster::SetName(std::string name)
	{
		name = name;
	}
}