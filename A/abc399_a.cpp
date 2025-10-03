#include <algorithm>
#include <iostream>
#include <string>
#include <ranges>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
    int N = 0;
    string S = "";
    string D = "";
    cin >> N;
    cin >> S;
    cin >> D;


    int cnt = static_cast<int>(ranges::count_if(views::iota(0, (int)S.size()), [&](int i){ return S[i] != D[i]; }));

    cout << cnt << endl;

    return 0;
}