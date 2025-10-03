#include <iostream>

using namespace std;


int main(int argc, char *argv[]) {
    const int MAX_T = 400;
    int A = 0;
    int B = 0;
    cin >> A;
    B = MAX_T / A;

    if (MAX_T%A == 0) {
        std::cout << B << std::endl;
    }else {
        std::cout << -1 << std::endl;
    }
    return 0;
}
