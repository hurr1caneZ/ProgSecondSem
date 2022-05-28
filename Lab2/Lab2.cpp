#include <iostream>
#include "Lab2.h"

using namespace std;

VectorR3::VectorR3() {
    x = 0;
    y = 0;
    z = 0;
}

VectorR3::VectorR3(const float& a, const float& b, const float& c) {
    x = a;
    y = b;
    z = c;
}


VectorR3::VectorR3(const VectorR3& copy) : x(copy.x), y(copy.y), z(copy.z) {

}



VectorR3::VectorR3(const vector<float>& v) {
    x = v[0];
    y = v[1];
    z = v[2];
}


void VectorR3::setX(const float& a) {
    x = a;
}

void VectorR3::setY(const float& b) {
    y = b;
}

void VectorR3::setZ(const float& c) {
    z = c;
}

void VectorR3::setXYZ(const float& a, const float& b, const float& c) {
    x = a;
    y = b;
    z = c;
}


float VectorR3::getX() {
    return x;
}

float VectorR3::getY() {
    return y;
}

float VectorR3::getZ() {
    return z;
}


VectorR3 VectorR3::sumVectors(const VectorR3& r2) {
    VectorR3 v_res;
    v_res.x = x + r2.x;
    v_res.y = y + r2.y;
    v_res.z = z + r2.z;
    return v_res;
}

VectorR3 VectorR3::subVectors(const VectorR3& r2) {
    VectorR3 v_res;
    v_res.x = x - r2.x;
    v_res.y = y - r2.y;
    v_res.z = z - r2.z;
    return v_res;
}

float VectorR3::lenVectors() {
    return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}

float VectorR3::angleVector(const VectorR3& r1) {
    float dot = x * r1.x + y * r1.y + r1.z * z;
    float len1 = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
    float len2 = sqrt(pow(r1.x, 2) + pow(r1.y, 2) + pow(r1.z, 2));
    return acos(dot / (len1 * len2)) * 57.3248;
}

std::ostream& operator<<(ostream& out, const VectorR3& a) {
    out << "(" << a.x << "," << a.y << "," << a.z << ")";
    return out;
}