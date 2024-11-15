// This code will take a sequence of 2D points and find the largest diameter between any two points

#include <iostream>
#include <vector>
#include <sstream>
#include <cmath>

int main() {
    std::vector<std::pair<int, int>> input;
    std::string input_line;

    std::getline(std::cin, input_line);
    std::istringstream iss(input_line);
    int x, y;
    while (iss >> x >> y) {
        input.push_back(std::make_pair(x, y));
    }

    int max_distance = 0;
    for (int i = 0; i < input.size(); i++) {
        for (int j = i + 1; j < input.size(); j++) {
            int distance = sqrt(pow(input[i].first - input[j].first, 2) + pow(input[i].second - input[j].second, 2));
            if (distance > max_distance) {
                max_distance = distance;
            }
        }
    }
    std::cout << max_distance << std::endl;
    return 0;
}
