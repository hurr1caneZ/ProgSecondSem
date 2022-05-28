#ifndef MAIN_CPP_CHOICES_H
#define MAIN_CPP_CHOICES_H

#include "Rectangle.h"
#include "Trapezoid.h"
#include <vector>

using namespace std;

class Choices {
private:
    Vector2D* centerMass = new Vector2D(0, 0);
    vector<AllClasses*> vec;

public:

    void AddFigures();
    void ShowFigures();
    void SummarySquare();
    void SummaryPerimeter();
    void SummaryCenterMass();
    void AllMemory();
    void MassSort();


};



#endif //MAIN_CPP_CHOICES_H