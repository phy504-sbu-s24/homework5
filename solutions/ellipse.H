#ifndef ELLIPSE_H
#define ELLIPSE_H

#include <cmath>
#include <iostream>

class ellipse {

    double a;
    double e;

public:

    ellipse(double a_in, double e_in)
        : a(a_in), e(e_in)
    {}

    double b() {return a * std::sqrt(1.0 - e*e);}

    double radius(double theta) {
        double theta_rad = theta * M_PI / 180;
        return a * (1.0 - e*e) / (1.0 - e * std::cos(theta_rad));
    }

    friend std::ostream& operator<< (std::ostream& os, const ellipse& ell);
};

inline
std::ostream& operator<< (std::ostream& os, const ellipse& ell) {
    os << "ellipse: (" << ell.a << ", " << ell.e << ")";
    return os;
}

#endif
