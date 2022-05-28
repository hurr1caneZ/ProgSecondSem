#include "menu.h"
#include <iostream>


Menu::Menu() {
    Number = 0;
    cout << "������� ����� �������:\n";
    cout << "1 - ����� ���� ��������\n";
    cout << "2 - �������� ���� ��������\n";
    cout << "3 - ����� �������\n";
    cout << "4 - ���� ����� ����� ���������\n";
    cout << "5 - ����� �������\n";
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
        cout << "������� ������ ������\n";
        cin >> x >> y >> z;
        r1.setXYZ(x, y, z);

        cout << "������� ������ ������\n";
        cin >> x >> y >> z;
        r2.setXYZ(x, y, z);

        cout << "��������� �����:\n" << r1.sumVectors(r2);
        break;


    case 2:
        cout << "������� ������ ������\n";
        cin >> x >> y >> z;
        r1.setXYZ(x, y, z);

        cout << "������� ������ ������\n";
        cin >> x >> y >> z;
        r2.setXYZ(x, y, z);

        cout << "��������� ��������:\n" << r1.subVectors(r2);
        break;


    case 3:
        cout << "������� ������\n";
        cin >> x >> y >> z;
        r1.setXYZ(x, y, z);

        cout << "����� ������� =\n" << r1.lenVectors();
        break;


    case 4:
        cout << "������� ������ ������\n";
        cin >> x >> y >> z;
        r1.setXYZ(x, y, z);
        cout << r1;
        cout << "������� ������ ������\n";
        cin >> x >> y >> z;
        r2.setXYZ(x, y, z);
        cout << r2;
        cout << "���� ����� ����� ��������� = " << r2.angleVector(r1);
        break;

    case 5:
        cout << "������� ������\n";
        cin >> x >> y >> z;
        r1.setXYZ(x, y, z);
        cout << "����� ������� :" << r1 << endl;
        break;

    default:
        cout << "��� ����� �������!\n";
        break;


    }

}