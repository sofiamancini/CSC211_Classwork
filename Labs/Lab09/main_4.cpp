// This code uses recursive backtracking to find all possible n length binary strings.

#include <iostream>
#include <vector>

void binary_strings(int n, std::vector<int>& v) {
    if (n == 0) {
        for (int i = 0; i < v.size(); i++) {
            std::cout << v[i];
        }
        std::cout << std::endl;
        return;
    }
    v.push_back(0);
    binary_strings(n - 1, v);
    v.pop_back();
    v.push_back(1);
    binary_strings(n - 1, v);
    v.pop_back();
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> v;
    binary_strings(n, v);
    return 0;
}
