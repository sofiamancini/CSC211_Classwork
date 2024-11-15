// This code will solve the classic three cup street game wheere the ball always starts in the leftmost cup

#include <iostream>
#include <string>
#include <vector>



// Function to preform the swap based on user input of A, B, or C
void swapCups(char swap, std::vector<int>& cups) {
    int temp;
    switch (swap) {
        case 'A':
            temp = cups[0];
            cups[0] = cups[1];
            cups[1] = temp;
        
            break;
        case 'B':
            temp = cups[1];
            cups[1] = cups[2];
            cups[2] = temp;
            break;
        case 'C':
            temp = cups[0];
            cups[0] = cups[2];
            cups[2] = temp;
            break;
        default:
            break;
    }
}

// Function to preform swaps and return the final position of the ball
int findBallPosition(std::string swaps) {
    std::vector<int> cups (3, 0);
    cups[0] = 1;
    for (int i = 0; i < swaps.size(); i++) {
        swapCups(swaps[i], cups);
    }
    for (int i = 0; i < cups.size(); i++) {
        if (cups[i] == 1) {
            return i;
        }
    }
    return -1;
}

int main() {
    std::string swaps;
    std::cin >> swaps;
    int ballPosition = findBallPosition(swaps);
    if (ballPosition == 0) {
        std::cout << 1 << std::endl;
    } else if (ballPosition == 1) {
        std::cout << 2 << std::endl;
    } else if (ballPosition == 2) {
        std::cout << 3 << std::endl;
    } else {
        std::cout << "Error" << std::endl;
    }
    return 0;
}
