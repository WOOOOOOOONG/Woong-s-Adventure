#include <iostream>
#include "Soldier.h"

namespace adventure 
{
	Soldier::Soldier() 
	{
		maxHealth = 100;
		curHealth = 100;
		strength = 10;
		nimble = 10;
		intelligence = 10;
		attack = 10;
		level = 1;
		job = "�ʺ���";
	}

	Soldier::~Soldier() {}

	unsigned int Soldier::LevelUp() 
	{
		level += 1;

		maxHealth += 10;
		curHealth += 10;
		strength += 3;
		attack += 5;

		return level;
	}

	unsigned int Soldier::Attack() const
	{
		std::cout << GetJobW() << "�� �Ϲ� ����!" << std::endl;
		return attack;
	}

	int Soldier::Receive(int damage) 
	{
		curHealth -= damage;
		return curHealth;
	}

	void Soldier::Evolution() {}

	unsigned int Soldier::Skill() const
	{
		std::cout << "���!" << std::endl;
		return 5;
	}

	bool Soldier::IsDead()
	{
		if (curHealth <= 0)
		{
			return true;
		}
		else 
		{
			return false;
		}
	}

	unsigned int Soldier::Dead() 
	{
		if (level > 1)
		{
			curHealth = maxHealth;
			level--;
			std::cout << "��簡 ����Ͽ� ������ 1 �����Ͽ����ϴ�.\n";
		}
		else
		{
			curHealth = maxHealth;
			std::cout << "����� ������ 1�̾ ������ �������� �ʾ�����, " <<
				"�ִ��� ���� �����ñ� ����帳�ϴ�.\n";
		}

		return level;
	}

	void Soldier::Status() const
	{
		std::cout << "ĳ������ ������ ����մϴ�.\n";
		std::cout << "���� : " + job
			<< "\n���� : " << level
			<< "\nü�� : " << maxHealth
			<< "\n�� : " << strength
			<< "\n��ø : " << nimble
			<< "\n���� : " << intelligence
			<< "\n���ݷ� : " << attack << std::endl;
	}

	void Soldier::Heal() 
	{
		SetCurHealth(GetMaxHealth());
	}

	int Soldier::GetMaxHealth() const
	{
		return maxHealth;
	}
	
	int Soldier::GetCurHealth() const
	{
		return curHealth;
	}

	unsigned int Soldier::GetStrength() const 
	{
		return strength;
	}

	unsigned int Soldier::GetNimble() const
	{
		return nimble;
	}

	unsigned int Soldier::GetIntelligence() const
	{
		return intelligence;
	}
	
	unsigned int Soldier::GetAttack() const
	{
		return attack;
	}
	
	unsigned int Soldier::GetLevel() const
	{
		return level;
	}
	
	string Soldier::GetJobW() const
	{
		return job;
	}

	void Soldier::SetMaxHealth(int num) 
	{
		maxHealth = num;
	}

	void Soldier::SetCurHealth(int num) 
	{
		curHealth = num;
	}

	void Soldier::SetStrength(int num) 
	{
		strength = num;
	}

	void Soldier::SetNimble(int num) 
	{
		nimble = num;
	}

	void Soldier::SetIntelligence(int num) 
	{
		intelligence = num;
	}

	void Soldier::SetAttack(int num)
	{
		attack = num;
	}

	void Soldier::SetLevel(int num)
	{
		level = num;
	}

	void Soldier::SetJobW(string name)
	{
		job = name;
	}
}