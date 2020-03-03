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
		job = "초보자";
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
		std::cout << GetJobW() << "의 일반 공격!" << std::endl;
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
		std::cout << "찌르기!" << std::endl;
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
			std::cout << "용사가 사망하여 레벨이 1 감소하였습니다.\n";
		}
		else
		{
			curHealth = maxHealth;
			std::cout << "용사의 레벨이 1이어서 레벨은 감소하지 않았지만, " <<
				"최대한 죽지 않으시길 권장드립니다.\n";
		}

		return level;
	}

	void Soldier::Status() const
	{
		std::cout << "캐릭터의 정보를 출력합니다.\n";
		std::cout << "직업 : " + job
			<< "\n레벨 : " << level
			<< "\n체력 : " << maxHealth
			<< "\n힘 : " << strength
			<< "\n민첩 : " << nimble
			<< "\n지능 : " << intelligence
			<< "\n공격력 : " << attack << std::endl;
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