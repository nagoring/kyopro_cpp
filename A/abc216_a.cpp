#include <algorithm>
#include <iostream>
#include <ostream>

int main(int argc, char *argv[]) {

	std::string line;
	// std::cin >> line;
	std::getline(std::cin, line);
	size_t pos = line.find('.');
	int X = std::stoi(line.substr(0,pos));
	int Y = std::stoi(line.substr(pos + 1,1));

	if (0 <= Y && Y <= 2) {
		std::cout << X << "-" << std::endl;
		return 0;
	}
	if (2 <= Y && Y <= 6) {
		std::cout << X << "" << std::endl;
		return 0;
	}
	if (7 <= Y && Y <= 9) {
		std::cout << X << "+" << std::endl;
		return 0;
	}

	return 0;
}

