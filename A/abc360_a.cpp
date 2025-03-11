#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
    std::string line;
    std::getline(std::cin, line);

    int r_index = 0;
    int m_index = 0;
    int index = 0;
    for (char c : line) {
        index++;
        if (c == 'R') {
            r_index = index;
            continue;
        }
        if (c == 'M') {
            m_index = index;
        }
    }
    if (r_index < m_index){
        std::cout << "Yes" << std::endl;
    }
    else{
        std::cout << "No" << std::endl;
    }

    return 0;
}
