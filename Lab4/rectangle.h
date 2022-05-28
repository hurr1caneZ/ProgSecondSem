#ifndef LAB4_RECTANGLE_H
#define LAB4_RECTANGLE_H
#include "interface.h"
class Rectangle : public AllClasses {
private:
    Vector2D V1, V2;
    double Mass;

public:
    Rectangle();
    Rectangle(const float& x1, const float& y1, const float& x2, const float& y2, double& m);

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
};
#endif //LAB4_RECTANGLE_H