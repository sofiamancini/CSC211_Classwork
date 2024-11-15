#include <iostream>
void mystery(int& b, int c, int& a) {
    a ++;
    b --;
    c += a;
}

int main () {

    int num, fact =1;
    
    std::cin >> num;
    if (num >= 0 && num < 30) {
        for (int i = 1; i <= num; ++i) {
            if (num > 12) {
                std::cout << "Can't handle this" << std::endl;
                return 0;
            }
            fact *= i;

        }
        std::cout << fact << std::endl;
    }

    return 0;
}