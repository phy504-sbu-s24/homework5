#include <iostream>

#include "ellipse.H"

int main() {

    ellipse e1(1.0, 0.3);
    std::cout << e1 << std::endl;
    std::cout << "perihelion: " << e1.radius(0) << std::endl;
    std::cout << "ahelion: " << e1.radius(180) << std::endl;
    std::cout << "semi-minor axis: " << e1.b() << std::endl;
}
