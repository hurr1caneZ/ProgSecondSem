#include <iostream>
#include "Choices.h"
using namespace std;

void Choices::AddFigures() {
    int command;
    while (true) {
        cout << "Enter your figure:\n" << "[1] - Trapezoid\n" << "[2] - Rectangle\n";
        cin >> command;
        if (command == 1) {
            Trapezoid* newTrapezoid = new Trapezoid;
            newTrapezoid->initFromDialog();
            vec.push_back(newTrapezoid);
            return;
        }
        if (command == 2) {
            Rectangle* newRectangle = new Rectangle;
            newRectangle->initFromDialog();
            vec.push_back(newRectangle);
            return;
        }
        break;
    }

}

void Choices::ShowFigures() {
    if (!vec.empty()) {
        cout << "Here are your Trapezoids\n";
    }
    for (auto t : vec) {
        t->draw();
        cout << endl;
    }
}

void Choices::SummarySquare() {
    float square = 0;
    for (auto t : vec) {
        square += t->square();
    }
    cout << "Here are squares of all figures: " << square << endl;
}

void Choices::SummaryPerimeter() {
    float perimeter = 0;
    for (auto t : vec) {
        perimeter += t->perimeter();
    }
    cout << "Here are perimetres of all figures: " << perimeter << endl;
}

void Choices::SummaryCenterMass() {
    float sumMass = 0;
    float sumMassX = 0;
    float sumMassY = 0;

    for (auto t : vec) {
        sumMass += t->mass();
        sumMassX += t->mass() * t->position().x;
        sumMassY += t->mass() * t->position().y;
    }
    centerMass->x = sumMassX / sumMass;
    centerMass->y = sumMassY / sumMass;

    cout << "Here are your coordinates of Mass Centre of system: \n";
    cout << "x: " << centerMass->x << endl;
    cout << "y: " << centerMass->y << endl;
}

void Choices::AllMemory() {
    int size = 0;
    for (auto t : vec) {
        size += t->size();
    }
    cout << "Here is sum sizes of all figures: " << size << endl;
}

void Choices::MassSort() {
    int j = 0;
    for (int i = 0; i < vec.size(); i++) {
        j = i;
        for (int k = i; k < vec.size(); k++) {
            if (vec[j]->mass() > vec[k]->mass()) {
                j = k;
            }
        }
        swap(vec[i], vec[j]);
    }
    cout << "Figures has been sorted" << endl;

}


