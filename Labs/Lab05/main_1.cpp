#include <iostream>

int add(int a, int b) {
    return a + b;
}

int mult(int a, int b) {
    int temp = 0;
    for (int i = 0; i < b; i++) {
        temp += a;
    }
    return temp;
}

int exp(int a, int b) {
    int temp = 1;
    for (int i = 0; i < b; i++) {
        temp = mult(temp, a);
    }
    return temp;
}


int main() {
    std::cout << exp(2, 6) << std::endl;
    return 0;
}

// int exp(int aint b) {
//     for (int i = 0; i < b; i++) {
//         a += mult(a, a);
//     }
// }


