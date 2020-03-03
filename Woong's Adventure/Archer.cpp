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
		SetJobW("궁수");
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
			std::cout << "30레벨 이상 달성하셨습니다 !\n"
				<< "앞으로 당신의 직업명은 '신궁'입니다." << std::endl;
			SetJobW("신궁");
		}
		else if (GetLevel() >= 20)
		{
			std::cout << "20레벨 이상 달성하셨습니다 !\n"
				<< "앞으로 당신의 직업명은 '저격수'입니다." << std::endl;
			SetJobW("저격수");
		}
	}

	unsigned int Archer::Skill() const
	{
		if (GetLevel() >= 30)
		{
			std::cout << GetJobW() << "의 스나이핑!!!!" << std::endl;
			return 450;
		}
		else if (GetLevel() >= 20)
		{
			std::cout << GetJobW() << "의 에로우 붐!!!" << std::endl;
			return 250;
		}
		else if (GetLevel() >= 10)
		{
			std::cout << GetJobW() << "의 조준 일격!!" << std::endl;
			return 90;
		}
		else
		{
			std::cout << "아직 스킬을 사용할 수 없습니다." << std::endl;
			return 0;
		}

		return 0;
	}
}