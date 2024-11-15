#include <iostream>
#include <string>

void printTopBottomLine(int n) {
    std::string equals = "====";
    std::cout << "#";
    if (n == 0)
        std::cout << equals;
    else {
        for (int i = 0; i < n; ++i) {
            std::cout << equals;
        }
    }
    std::cout << "#";
}

void printInsideLine(int n) {
    std::cout << "|";
    
    int spaces_before = (4 * n - 3) / 2; 
    int spaces_after = spaces_before;  

    for (int i = 0; i < spaces_before; ++i) {
        std::cout << " ";
    }

    std::cout << "<><>";

    for (int i = 0; i < spaces_after; ++i) {
        std::cout << " ";
    }

    std::cout << "|";
}

void printMiddleLine() {
    std::cout << "|";
    
    std::cout << "|";
}

int main() {
    int n;
    std::cin >> n;

    if (n > 0 && n <= 10) {
        printTopBottomLine(n);
        std::cout << std::endl;
        printInsideLine(n);
        std::cout << std::endl;
        printMiddleLine();
        std::cout << std::endl;
        printInsideLine(n);
        std::cout << std::endl;
        printTopBottomLine(n);
        std::cout << std::endl;
    }

    return 0;
}