#include <iostream>

int main() {
    int a, b, c, count, i= 0;
    std::cin >> a >> b >> c;
    count = a;
    if (a <= 20 && b <= 20 && c <= 20) {
        while (count <= b) {
            for (i = 0; i < count; i++) {
                std::cout << "+";
            }
            std::cout << std::endl;   
            count += c;
        }

        int lengthLadder = count - c;
        while (lengthLadder >= a) {
            for (i = 0; i < lengthLadder; i++) {
                std::cout << "+";
            }
            std::cout << std::endl;
            lengthLadder -= c;
        }
    }
    return 0;
}