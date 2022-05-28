#ifndef LAB4_INTERFACE_H
#define LAB4_INTERFACE_H

#include <clocale>
// ��������� "�������������� ������"
class IGeoFig {
public:
    // �������
    virtual double square() = 0;
    // ��������
    virtual double perimeter() = 0;
};

// ������
class Vector2D {
public:
    double x, y;
    Vector2D(double x, double y) : x(x), y(y) {}
    Vector2D() : x(0), y(0) {}
    Vector2D(const Vector2D& second) {
        this->x = second.x;
        this->y = second.y;
    }
};

// ��������� "���������� ������"
class PhysObject {
public:
    // �����, ��
    virtual double mass() const = 0;
    // ���������� ������ ����, �
    virtual Vector2D position() = 0;
    // ��������� �� �����.
    virtual bool operator == (const PhysObject& ob) const = 0;
    // ��������� �� �����.
    virtual bool operator < (const PhysObject& ob) const = 0;
};

// ��������� "������������"
class Printable {
public:
    // ���������� �� ������
    // (�������� � �������� ���� ��������� ������).
    virtual void draw() = 0;
};

// ���������� ��� �������, ������� ����� ������ ����� ������ � �������������
class DialogInitiable {
    // ������ ��������� ������� � ������� ������� � �������������
    virtual void initFromDialog() = 0;
};

// ��������� "�����"
class BaseObject {
public:
    // ��� ������ (���� ������)
    virtual const char* classname() = 0;
    // ������ ���������� ������
    virtual unsigned int size() = 0;
};

class AllClasses : public BaseObject, public  DialogInitiable, public Printable, public PhysObject, public IGeoFig {
    //�����, ��� ������� ��� ���������
};

#endif //LAB4_INTERFACE_H