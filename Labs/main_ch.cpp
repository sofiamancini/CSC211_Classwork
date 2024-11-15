// This code will return the number of ways change can be made for a given amount of money

#include <iostream>
#include <vector>

// Function to count the number of ways change can be made
int countChange(int amount, std::vector<int> coins, int index);

int main() {
    std::vector<int> coins = {25, 10, 5, 1};
    int amount = 10;
    std::cout << countChange(amount, coins, 0) << std::endl;
    return 0;
}

int countChange(int amount, std::vector<int> coins, int index) {
    if (amount == 0) {
        return 1;
    }
    if (amount < 0) {
        return 0;
    }
    if (index == coins.size() && amount > 0) {
        return 0;
    }
    return countChange(amount - coins[index], coins, index) + countChange(amount, coins, index + 1);
}