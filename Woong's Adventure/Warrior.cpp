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
		SetJobW("전사");
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
			std::cout << "30레벨 이상 달성하셨습니다 !\n" 
				<< "앞으로 당신의 직업명은 '히어로'입니다." << std::endl;
			SetJobW("히어로");
		}
		else if (GetLevel() >= 20)
		{
			std::cout << "20레벨 이상 달성하셨습니다 !\n"
				<< "앞으로 당신의 직업명은 '용기사'입니다." << std::endl;
			SetJobW("용기사");
		}
	}

	unsigned int Warrior::Skill() const
	{
		if (GetLevel() >= 30) 
		{
			std::cout << GetJobW() << "의 생츄어리!!!!" << std::endl;
			return 300;
		}
		else if (GetLevel() >= 20)
		{
			std::cout << GetJobW() << "의 드래곤 로어!!!" << std::endl;
			return 200;
		}
		else if (GetLevel() >= 10)
		{
			std::cout << GetJobW() << "의 슬래시 블러스트!!" << std::endl;
			return 70;
		}
		else
		{
			std::cout << GetJobW() << "아직 스킬을 사용할 수 없습니다." << std::endl;
			return 0;
		}

		return 0;
	}
}