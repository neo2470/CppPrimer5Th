#include <iostream>

int main() {

	int sum = 0;
	int val = 1;

	while (val <= 100) {
		sum += val;
		++val;
	}

	std::cout << "The sum of 1 to " << val << " is : " << sum << std::endl;

	return 0;
}
