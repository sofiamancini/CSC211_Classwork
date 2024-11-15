#include <iostream>
#include <vector>

int main() {
    int days, junkAmount;
    std::vector<int> spaceJunk;

    std::cin >> days;

    for (int i = 0; i < days; i++) {
        std::cin >> junkAmount;
        spaceJunk.push_back(junkAmount);
        }

    int lowest = 0;
    for (int i = 0; i < days; i++) {
        if (spaceJunk.at(i) < spaceJunk.at(lowest)) {
            lowest = i;
        }

    }
    std::cout << lowest << std::endl;
    return 0;
}