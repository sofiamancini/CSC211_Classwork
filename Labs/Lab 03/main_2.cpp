#include <iostream>

int main(){
    int speed;
    std::cin >> speed;

    if (speed >= 50 && speed <= 55){
        std::cout << "Pushing your luck";
    }
    else if (speed > 55){
        std::cout << "speeding";
    }
    else{
        std::cout << "Safe";
    }
        return 0;

}