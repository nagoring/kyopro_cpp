#include <iostream>
#include <ostream>

int main(int argc, char *argv[]) {

	std::string line;
	std::getline(std::cin, line);
	size_t pos = line.find(' ');
	std::string S = line.substr(0,pos);
	std::string T = line.substr(pos + 1);


	if (S < T) {
		std::cout << "Yes" << std::endl;
		return 0;
	}
	if (S > T) {
		std::cout << "No" << std::endl;
		return 0;
	}

	return 0;
}

