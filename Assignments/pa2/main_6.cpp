#include <iostream>

int main () {

    int n, s, sum = 0;
    std::cin >> n >> s;
    for (int i = 0; i < s; i++) {
        sum += n;
        n--;

    }
    std::cout << sum << std::endl;
    return 0;
}