#include <iostream>
#include <cmath>

int main() {
    double loan, rate, payment, balance;
    std::cin >> loan >> rate >> payment;
    int payoff = 1;

    if (loan > 0.0 && rate > 0.0 && payment > 0.0) {
        if (loan <= pow(10,10) && rate <= 0.5) {
            balance = (loan * rate) + loan;
            double temp = balance - payment;
            if (payment < balance)
                while (temp > 0.0) {
                    balance = temp + (temp * rate);
                    temp = balance - payment;
                    payoff++;
                }
        }
        std::cout << payoff << std::endl;
    
    }
    return 0;
    }
