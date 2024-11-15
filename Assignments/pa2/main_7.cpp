#include <iostream>
#include <vector>

int main() {
    long int num;
    int sum = 0;
    std::vector<int> digits;

    std::cin >> num;
    if (num > 0 && num < 4294967296) {
        while (num > 0) {
            digits.push_back(num % 10);
            
            num /= 10;
        }
        for (int i = 0; i < digits.size(); i++) {
            if (digits[i] % 2 == 0) {
                sum += digits[i];
            }
        }
        
    }
std::cout << sum << std::endl;

}