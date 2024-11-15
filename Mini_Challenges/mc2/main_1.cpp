#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

int main () {
    double x1, x2, y1, y2, length_v1, length_v2, norm_x1, norm_x2, norm_y1, norm_y2, dotProduct;
    std::cin >> x1 >> y1 >> x2 >> y2;

    length_v1 = sqrt((x1 * x1) + (y1 * y1));
    length_v2 = sqrt((x2 * x2) + (y2 * y2));

    norm_x1 = x1 / length_v1;
    norm_x2 = x2 / length_v2;
    norm_y1 = y1 / length_v1;
    norm_y2 = y2 / length_v2;

    std::cout << std::fixed  << std::setprecision(4) << "Length of v1: " << length_v1 << std::endl;
    std::cout << std::fixed  << std::setprecision(4) << "Length of v2: " << length_v2 << std::endl;

    std::string angle;

    dotProduct = (norm_x1 * norm_x2) + (norm_y1 * norm_y2);

    if (dotProduct > 0) {
        angle = "Acute";
    } else if (dotProduct < 0) {
        angle = "Obtuse";
    } else {
        angle = "Perpendicular";
    }

    std::cout << std::fixed << std::setprecision(4) << "Their normalized dot product is " << dotProduct << " and they are " << angle << std::endl;
    return 0;

}