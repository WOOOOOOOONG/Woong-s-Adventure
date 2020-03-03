#pragma once
#include <string>

#include "Monster.h"

namespace adventure {
	class Goblin : public Monster {
	public:
		Goblin();
		~Goblin();

		unsigned int Attack();
	};
}