#pragma once
#include <iostream>
#include <string>

namespace adventure {
	class Monster {
	public:
		Monster();
		virtual ~Monster();

		virtual unsigned int Attack();
		virtual unsigned int Receive(int receive);
		virtual unsigned int Dead();
		virtual void Status();
		virtual void Heal();

		int GetMaxHealth();
		int GetCurHealth();
		unsigned int GetAttack();
		unsigned int GetLevel();
		std::string GetName();

		void SetMaxHealth(int num);
		void SetCurHealth(int num);
		void SetAttack(int num);
		void SetLevel(int num);
		void SetName(std::string name);

	private:
		int maxHealth;
		int curHealth;
		unsigned int attack;
		unsigned int level;
		std::string name;
	};
}