#include <iostream>
#include <string>

int main() {
    int x, y;
    std::cin >> x >> y;

    int move;
    while (std::cin >> move) {
        switch (move) {
            case 0:
                x += 2;
                y += 1;
                break;
            case 1:
                x += 2;
                y -= 1;
                break;
            case 2:
                x += 1;
                y -=2;
                break;
            case 3:
                x -= 1;
                y -= 2;
                break;
            case 4:
                x -= 2;
                y -= 1;
                break;
            case 5:
                x -= 2;
                y += 1;
                break;
            case 6:
                x -= 1;
                y += 2;
                break;
            case 7:
                x += 1;
                y += 2;
                break;
        }
        if (x < 1 || x > 8 || y < 1 || y > 8) {
            std::cout << "Invalid sequence" << std::endl;
            return 0;
        }
        if (std::cin.peek() == '\n') {
            break;
        }

    }
    std::cout << x << " " << y << std::endl;
    return 0;
}