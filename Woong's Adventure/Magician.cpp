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
		SetJobW("마법사");
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
			std::cout << "30레벨 이상 달성하셨습니다 !\n"
				<< "앞으로 당신의 직업명은 '대현자'입니다." << std::endl;
			SetJobW("대현자");
		}
		else if (GetLevel() >= 20)
		{
			std::cout << "20레벨 이상 달성하셨습니다 !\n"
				<< "앞으로 당신의 직업명은 '현자'입니다." << std::endl;
			SetJobW("현자");
		}
	}

	unsigned int Magician::Skill() const
	{
		if (GetLevel() >= 30)
		{
			std::cout << GetJobW() << "의 제네시스!!!!" << std::endl;
			return 450;
		}
		else if (GetLevel() >= 20)
		{
			std::cout << GetJobW() << "의썬더 볼트!!!" << std::endl;
			return 270;
		}
		else if (GetLevel() >= 10)
		{
			std::cout << GetJobW() << "의 매직 볼트!!" << std::endl;
			return 80;
		}
		else
		{
			std::cout << GetJobW() << "아직 스킬을 사용할 수 없습니다." << std::endl;
			return 0;
		}

		return 0;
	}
}