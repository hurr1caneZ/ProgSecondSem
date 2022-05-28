#ifndef LAB4_INTERFACE_H
#define LAB4_INTERFACE_H

#include <clocale>
// Интерфейс "Геометрическая фигура"
class IGeoFig {
public:
    // Площадь
    virtual double square() = 0;
    // Периметр
    virtual double perimeter() = 0;
};

// Вектор
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

// Интерфейс "Физический объект"
class PhysObject {
public:
    // Масса, кг
    virtual double mass() const = 0;
    // Координаты центра масс, м
    virtual Vector2D position() = 0;
    // Сравнение по массе.
    virtual bool operator == (const PhysObject& ob) const = 0;
    // Сравнение по массе.
    virtual bool operator < (const PhysObject& ob) const = 0;
};

// Интерфейс "Отображаемый"
class Printable {
public:
    // Отобразить на экране
    // (выводить в текстово виде параметры фигуры).
    virtual void draw() = 0;
};

// Интерефейс для классов, которые можно задать через диалог с пользователем
class DialogInitiable {
    // Задать параметры объекта с помошью диалога с пользователем
    virtual void initFromDialog() = 0;
};

// Интерфейс "Класс"
class BaseObject {
public:
    // Имя класса (типа данных)
    virtual const char* classname() = 0;
    // Размер занимаемой памяти
    virtual unsigned int size() = 0;
};

class AllClasses : public BaseObject, public  DialogInitiable, public Printable, public PhysObject, public IGeoFig {
    //класс, где собраны все остальные
};

#endif //LAB4_INTERFACE_H