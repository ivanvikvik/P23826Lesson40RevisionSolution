#include "logic.h"

string get_number_order(int n, int m) {
	string result = to_string(n);

	int d = n < m ? 1 : -1;
	int count = abs(m - n) + 1;

	for (int i = 1; i < count; i++)
	{
		result += " " + to_string(n + i * d);
	}

	return result;
}

// 1 5 --> 1 2 3 4 5
// 7 1 --> 7 6 5 4 3 2 1