#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    int ang1, ang2, ang3;
    std::string triangleType;

    std::cin >> ang1 >> ang2 >> ang3;

    if (ang1 + ang2 + ang3 == 180) {
        if (ang1 == 90 || ang2 == 90 || ang3 == 90) {
            triangleType = "Right";
        } else if (ang1 < 90 && ang2 < 90 && ang3 < 90) {
            triangleType = "Acute";
        } else if (ang1 > 90 || ang2 > 90 || ang3 > 90){
            triangleType = "Obtuse";
        }
    } else {
        triangleType = "This triangle is impossible";
    }

    std::cout << triangleType << std::endl;
    return 0;
}