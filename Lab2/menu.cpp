#include "menu.h"
#include <iostream>


Menu::Menu() {
    Number = 0;
    cout << "Введите номер команды:\n";
    cout << "1 - сумма двух векторов\n";
    cout << "2 - разность двух векторов\n";
    cout << "3 - длина вектора\n";
    cout << "4 - угол между двумя векторами\n";
    cout << "5 - вывод вектора\n";
    cout << "\n";
    cin >> Number;
}

void Menu::setNum(int& choice) {
    Number = choice;
}

void Menu::select() {
    VectorR3 r1, r2;
    float x, y, z;
    switch (Number) {
    case 1:
        cout << "Введите первый вектор\n";
        cin >> x >> y >> z;
        r1.setXYZ(x, y, z);

        cout << "Введите второй вектор\n";
        cin >> x >> y >> z;
        r2.setXYZ(x, y, z);

        cout << "Результат суммы:\n" << r1.sumVectors(r2);
        break;


    case 2:
        cout << "Введите первый вектор\n";
        cin >> x >> y >> z;
        r1.setXYZ(x, y, z);

        cout << "Введите второй вектор\n";
        cin >> x >> y >> z;
        r2.setXYZ(x, y, z);

        cout << "Результат разности:\n" << r1.subVectors(r2);
        break;


    case 3:
        cout << "Введите вектор\n";
        cin >> x >> y >> z;
        r1.setXYZ(x, y, z);

        cout << "Длина вектора =\n" << r1.lenVectors();
        break;


    case 4:
        cout << "Введите первый вектор\n";
        cin >> x >> y >> z;
        r1.setXYZ(x, y, z);
        cout << r1;
        cout << "Введите второй вектор\n";
        cin >> x >> y >> z;
        r2.setXYZ(x, y, z);
        cout << r2;
        cout << "Угол между двумя векторами = " << r2.angleVector(r1);
        break;

    case 5:
        cout << "Введите вектор\n";
        cin >> x >> y >> z;
        r1.setXYZ(x, y, z);
        cout << "Вывод вектора :" << r1 << endl;
        break;

    default:
        cout << "Нет такой команды!\n";
        break;


    }

}