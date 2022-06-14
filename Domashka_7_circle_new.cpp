#include <iostream>
#include <cmath>
#include "dom_7_circle_new.h"
using namespace std;


int main()
{
    setlocale(LC_ALL, "ru");

    /*Circle C1(25);
    Circle C2;
    C1.PrintRadius();
    cout << "Площадь равна " << C1.Sq() << endl;
    cout << "Длина окружности равна " << C1.Len() << endl;*/

    /*C2.PrintRadius();
    C2.SetRadius(2.5);
    cout << endl;
    C2.PrintRadius();
    C2.PrintSquare();
    C2.PrintLength();*/


    double D = 56;
    Circle C3(D, 2);
    C3.Print();
    Circle C4(C3);
    C4.Print();
    /*Circle C5(20);
    C5.Print();*/
}

