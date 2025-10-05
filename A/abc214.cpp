#include <algorithm>
#include <iostream>
#include <ostream>

int main(int argc, char *argv[]) {
	int n = 0;
	std::cin >> n;

	if (std::clamp(n,1,125) == n) {
		std::cout << "4" << std::endl;
		return 0;
	}
	if (std::clamp(n,126,211) == n) {
		std::cout << "6" << std::endl;
		return 0;
	}
	if (std::clamp(n,212,214) == n) {
		std::cout << "8" << std::endl;
		return 0;
	}

	return 0;
}
