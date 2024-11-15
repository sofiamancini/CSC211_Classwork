// Nearest neighbor algorithm

#include <iostream>
#include <vector>
#include <string>
#include <cmath>

void createLists(int n, std::vector<double> &x, std::vector<double> &y, std::vector<std::string> &colors) {
    for (int i = 0; i < n; i++) {
        double xCoord, yCoord;
        std::string color;
        std::cin >> xCoord >> yCoord >> color;
        x.push_back(xCoord);
        y.push_back(yCoord);
        colors.push_back(color);
    }
}

// Function to calculate the distance between two points
double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Function to find the k nearest neighbors
int nearestNeighbors(std::vector<double> x, std::vector<double> y, std::vector<std::string> colors, double xCoord, double yCoord, int k) {
    std::vector<std::pair<double, std::string>> distances; // Pair of distance and color
    for (int i = 0; i < x.size(); i++) {
        double dist = distance(x[i], y[i], xCoord, yCoord);
        distances.push_back({dist, colors[i]});
    }

    // Sorting algorithm to sort the distances
    for (int i = 0; i < distances.size(); i++) {
        for (int j = i + 1; j < distances.size(); j++) {
            if (distances[i].first > distances[j].first) {
                std::swap(distances[i], distances[j]);
            }
        }
    }

    int countR = 0;
    int countB = 0;

    // Count the k nearest neighbors
    for (int i = 0; i < k; i++) {
        if (distances[i].second == "R") {
            countR++;
        } else {
            countB++;
        }
    }

    if (countR > countB) {
        return 1;
    } else {
        return 0;
    }
}



// Main function
int main() {
    int n, k;
    std::cin >> n >> k;
    std::vector<double> x;
    std::vector<double> y;
    std::vector<std::string> colors;

    createLists(n, x, y, colors);

    double xCoord, yCoord;
    std::cin >> xCoord >> yCoord;

    int result = nearestNeighbors(x, y, colors, xCoord, yCoord, k);
    if (result == 1) {
        std::cout << "R" << std::endl;
    } else {
        std::cout << "B" << std::endl;
    }

}