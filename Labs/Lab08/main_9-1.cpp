// This code will print a ladder of '+' using recursion

#include <iostream>

void pyr(int levels, int current_level) {
    if (current_level == levels) {
        return;
    }
    if (current_level < levels / 2 ) {
        for (int i = 0; i < current_level; i++) {
            std::cout << "+";
        }
    } else {
        for (int i = 0; i < levels - current_level; i++) {
            std::cout << "+";
        }
    }
    std::cout << std::endl;
    pyr(levels, current_level + 1);
}

int main() {
    pyr(5, 0);
    return 0;
}