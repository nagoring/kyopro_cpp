#include <iostream>
#include <ostream>

int main(int argc, char *argv[]) {
	int a = 0;
	int b = 0;
	std::cin >> a >> b;

	if (0 < a && b == 0) {
		std::cout << "Gold" << std::endl;
		return 0;
	}
	if (0 == a && 0 < b) {
		std::cout << "Silver" << std::endl;
		return 0;
	}
	if (0 < a && 0 < b) {
		std::cout << "Alloy" << std::endl;
		return 0;
	}

	std::cout << b << std::endl;
	return 0;
}
