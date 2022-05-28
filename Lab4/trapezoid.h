#ifndef LAB4_TRAPEZOID_H
#define LAB4_TRAPEZOID_H
#include "interface.h"
class Trapezoid : public AllClasses {
private:
    float height, topline, lowline;
    double objmass;
    Vector2D v1, v2, v3, v4;


public:
    Trapezoid();
    Trapezoid(const float& x1, const float& x2, const float& x3, const float& x4, const float& y1, const float& y2, const float& y3, const float& y4, double& m);

    const char* classname() override;
    unsigned int size() override;
    double square() override;
    double perimeter() override;
    Vector2D position() override;
    double mass() const override;
    bool operator == (const PhysObject& ob) const override;
    bool operator < (const PhysObject& ob) const override;
    void draw() override;
    void initFromDialog() override;

    ~Trapezoid();

};
#endif //LAB4_TRAPEZOID_H