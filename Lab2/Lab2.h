#ifndef LAB2*_LAB2*_H
#define LAB2*_LAB2*_H
#include <cmath>
#include <vector>
using namespace std;

class VectorR3 {
private:
    float x;
    float y;
    float z;

public:
    VectorR3(); // конструктор по умолчанию
    VectorR3(const float& a, const float& b, const float& c); // конструтор 3 вещественных чисел
    VectorR3(const VectorR3&); // конструктор копирования
    VectorR3(const vector<float>& v); // конструктор вектора

    void setX(const float& a);
    void setY(const float& b);
    void setZ(const float& c);
    void setXYZ(const float& a, const float& b, const float& c);

    float getX();
    float getY();
    float getZ();

    friend std::ostream& operator << (std::ostream& out, const VectorR3&);

    VectorR3 sumVectors(const VectorR3& r2);
    VectorR3 subVectors(const VectorR3& r2);
    float lenVectors();
    float angleVector(const VectorR3& r1);
    //friend std::ostream& operator << (std::ostream &out, const VectorR3 &);


};
#endif //LAB2*_LAB2*_H