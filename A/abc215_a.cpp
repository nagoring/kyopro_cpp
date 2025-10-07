#include <algorithm>
#include <iostream>
#include <ostream>

int main(int argc, char *argv[]) {
	std::string line;
	// std::cin >> line;
	std::getline(std::cin, line);

	std::erase(line, '\r');
	std::erase(line, '\n');

	if (line == "Hello,World!") {
		std::cout << "AC" << std::endl;
		return 0;
	}
	std::cout << "WA" << std::endl;


	return 0;
}

