#pragma once
#include <iostream>
#include <string>

using namespace std;

namespace adventure {
	class Soldier {
	public:
		Soldier();
		virtual ~Soldier();

		virtual unsigned int LevelUp();
		virtual unsigned int Attack() const;
		virtual int Receive(int damage);
		virtual void Evolution();
		virtual unsigned int Skill() const;
		virtual bool IsDead();
		virtual unsigned int Dead();
		virtual void Status() const;
		virtual void Heal();

		int GetMaxHealth() const;
		int GetCurHealth() const;
		unsigned int GetStrength() const;
		unsigned int GetNimble() const;
		unsigned int GetIntelligence() const;
		unsigned int GetAttack() const;
		unsigned int GetLevel() const;
		string GetJobW() const;

		void SetMaxHealth(int num);
		void SetCurHealth(int num);
		void SetStrength(int num);
		void SetNimble(int num);
		void SetIntelligence(int num);
		void SetAttack(int num);
		void SetLevel(int num);
		void SetJobW(string name);

	private:
		int maxHealth;
		int curHealth;
		unsigned int strength;
		unsigned int nimble;
		unsigned int intelligence;
		unsigned int attack;
		unsigned int level;
		string job;
	};
}