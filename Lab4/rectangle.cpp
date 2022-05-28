#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle() {
    V1.x = 0;
    V2.x = 0;
    V1.y = 0;
    V2.y = 0;
    Mass = 0;
}

Rectangle::Rectangle(const float& x1, const float& y1, const float& x2, const float& y2, double& m) {
    V1.x = x1;
    V2.x = x2;
    V1.y = y1;
    V2.y = y2;
    Mass = m;
}

const char* Rectangle::classname() {
    return "Rectangle";
}

unsigned int Rectangle::size() {
    return sizeof(Rectangle);
}

double Rectangle::square() {
    return abs(V1.x - V2.x) * abs(V1.y - V2.y);

}

double Rectangle::perimeter() {
    return (abs(V1.x - V2.x) + abs(V1.y - V2.y)) * 2;
}

Vector2D Rectangle::position() {
    Vector2D answer;
    answer.x = ((abs(V1.x - V2.x)) / 2);
    answer.y = (abs(V1.y - V2.y)) / 2;
    return answer;
}

double Rectangle::mass() const {
    return Mass;
}

bool Rectangle::operator == (const PhysObject& ob) const {
    if (Mass == ob.mass()) {
        return true;
    }
    return false;
}

bool Rectangle::operator < (const PhysObject& ob) const {
    if (Mass < ob.mass()) {
        return true;
    }
    return false;
}

void Rectangle::draw() {
    cout << "Class name: " << classname();
    cout << "\nSquare: " << square();
    cout << "\nPerimeter: " << perimeter();
    cout << "\nMass: " << mass();
    cout << "\nSize: " << size();
    cout << "\nPosition: " << "x " << position().x << "y " << position().y << endl;
}

void Rectangle::initFromDialog() {
    cout << "Enter your Rectangle coordinates:\n";
    cin >> V1.x >> V1.y >> V2.x >> V2.y;
    cout << "Enter your Rectangle mass:\n";
    cin >> Mass;
}





