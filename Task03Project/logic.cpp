#include "logic.h"

bool is_power_of_two(int number) {
	if (number <= 0) {
		return false;
	}

	while (number % 2 == 0) {
		number /= 2;
	}

	return number == 1;
}

// <= 0 --> false
// 2^0 = 1 --> true
// 2^1 = 2 --> true
// ...
// 2^3 = 8 --> true    8 / 2 = 4 / 2 = 2 / 2 = 1


// 201 / 2 = 

// 2 * 2 * 2 * 2 * 2 * 