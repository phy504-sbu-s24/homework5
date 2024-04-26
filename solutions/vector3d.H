#ifndef VECTOR_2D_H
#define VECTOR_2D_H

#include <iostream>

class Vector3d {

private:

    // our member data

    double x;
    double y;
    double z;

public:

    // default constructor

    Vector3d()
        : x{0.0}, y{0.0}, z{0.0}
    {}

    // another constructor

    Vector3d(double _x, double _y, double _z)
        : x{_x}, y{_y}, z{_z}
    {}

    // setters

    inline void set_x(double _x) {x = _x;}

    inline void set_y(double _y) {y = _y;}

    inline void set_z(double _z) {z = _z;}

    // operators

    // add two vectors

    Vector3d operator+(const Vector3d& vec) {
        Vector3d v_out(x + vec.x, y + vec.y, z + vec.z);
        return v_out;
    }

    // subtract two vectors

    Vector3d operator-(const Vector3d& vec) {
        Vector3d v_out(x - vec.x, y - vec.y, z - vec.z);
        return v_out;
    }

    // unary minus

    Vector3d operator-() {
        Vector3d v_out(-x, -y, -z);
        return v_out;
    }

    Vector3d operator*(double a) {
        Vector3d v_out(a*x, a*y, a*z);
        return v_out;
    }

    double operator*(const Vector3d& v) {
        return x * v.x + y * v.y + z * v.z;
    }

    Vector3d operator/(double a) {
        Vector3d v_out(x/a, y/a, z/a);
        return v_out;
    }

    bool operator== (const Vector3d& v) {
        return x == v.x && y == v.y && z == v.z;
    }

    friend Vector3d operator*(double a, const Vector3d& v);

    // << is not a class member, but needs access to the member data

    friend std::ostream& operator<< (std::ostream& os, const Vector3d& v);
};

inline
Vector3d operator*(double a, const Vector3d& v) {
    Vector3d v_out(a*v.x, a*v.y, a*v.z);
    return v_out;
}


inline
std::ostream& operator<< (std::ostream& os, const Vector3d& v)
{
    os << "(" << v.x << ", " << v.y << ", " << v.z << ")";
    return os;
}

#endif
