#pragma once
#include <string>

#include "Monster.h"

namespace adventure {
	class Bear : public Monster{
	public:
		Bear();
		~Bear();

		unsigned int Attack();
	};
}