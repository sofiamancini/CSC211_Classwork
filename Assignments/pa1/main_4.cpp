#include <iostream>

int main()
{
    int a, b, sum, less, mult, div;
    char op;

    std::cin >> a >> b >> op;

    sum = a + b;
    less = a - b;
    mult = a * b;
    div = a / b;

    if (op == '+') {
        std::cout << a << ' ' << op << ' ' << b << " = " << sum << std::endl;
    }

    if (op == '-') {
        std::cout << a << ' ' << op << ' ' << b << " = " << less << std::endl;
    }

    if (op == '*') {
        std::cout<< a << ' ' << op << ' ' << b << " = " << mult << std::endl;
    }
    if (op == '/') {
        std::cout << a << ' ' << op << ' ' << b << " = " << div << std::endl;
    }

    return 0;
}