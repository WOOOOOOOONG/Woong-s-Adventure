#pragma once
#include <string>

#include "Monster.h"

namespace adventure {
	class Slime : public Monster {
	public:
		Slime();
		~Slime();

		unsigned int Attack();
	};
}