#include <iostream>
#include <string>

std::string reverse (int n) {
    std::string reversed = std::to_string(n);
    std::string temp;
    for (int i = reversed.length() - 1; i >= 0; i--) {
        temp += reversed[i];
    
    }
    return temp;
}

int main () {
    int n;
    std::cin >> n;
    std::cout << reverse(n) << std::endl;

    return 0;

}