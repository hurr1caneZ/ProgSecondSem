#include "Trapezoid.h"
#include <iostream>
#include <math.h>

using namespace std;

Trapezoid::Trapezoid() {
    v1.x = 0;
    v2.x = 0;
    v3.x = 0;
    v4.x = 0;
    v1.y = 0;
    v2.y = 0;
    v3.y = 0;
    v4.y = 0;
    objmass = 0;

}

Trapezoid::Trapezoid(const float& x1, const float& x2, const float& x3, const float& x4, const float& y1,
    const float& y2, const float& y3, const float& y4, double& m) {
    v1.x = x1;
    v2.x = x2;
    v3.x = x3;
    v4.x = x4;
    v1.y = y1;
    v2.y = y2;
    v3.y = y3;
    v4.y = y4;
    objmass = m;
    height = abs(v1.y - v2.y) - abs(v3.x - v4.x);
    topline = abs(v1.x - v2.x);
    lowline = abs(v3.x - v4.x);
}

const char* Trapezoid::classname() {
    return "Trapezoid";
}

unsigned int Trapezoid::size() {
    return sizeof(Trapezoid);
}

void Trapezoid::initFromDialog() {
    cout << "Enter your Trapezoid coordinates:\n";
    cin >> v1.x >> v1.y >> v2.x >> v2.y >> v3.x >> v3.y >> v4.x >> v4.y;
    cout << "Enter your Trapezoid mass:\n";
    cin >> objmass;
}

double Trapezoid::square() {
    return ((lowline + topline) / 2) * height;
}

double Trapezoid::perimeter() {
    return (topline + lowline + abs(v1.y - v2.y) + abs(v3.y - v4.y));
}

Vector2D Trapezoid::position() {
    return Vector2D(topline != lowline ? ((height / 3) * (2 * max(topline, lowline)) + min(topline, lowline)) / (topline + lowline) : pow(topline, 2), v1.x / 2);
}

double Trapezoid::mass() const {
    return objmass;
}

bool Trapezoid::operator == (const PhysObject& ob) const {
    return bool(objmass == ob.mass());

}

bool Trapezoid::operator < (const PhysObject& ob) const {
    return bool(objmass < ob.mass());
}

void Trapezoid::draw() {
    cout << "Class name: " << classname();
    cout << "\nSquare: " << square();
    cout << "\nPerimeter: " << perimeter();
    cout << "\nMass: " << mass();
    cout << "\nSize: " << size();
    cout << "\nPosition: " << "x " << position().x
        << "y " << position().y << endl;
}

Trapezoid::~Trapezoid() = default;