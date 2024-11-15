#include <iostream>

int main () {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 14; j++) {
            std::cout << "!";
            if (i == 1 && j > 11) {
                std::cout << "/";
            }
            

        }
        std::cout << std::endl;
    }
    return 0;
}