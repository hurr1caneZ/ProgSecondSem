#ifndef MAIN_CPP_MENU_H
#define MAIN_CPP_MENU_H
#include "Lab2.h"
using namespace std;

class Menu {
private:
    int Number;
public:
    Menu();
    void setNum(int& num);
    void getNum();
    void select();
};

#endif //MAIN_CPP_MENU_H