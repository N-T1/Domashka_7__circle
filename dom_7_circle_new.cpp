#include "dom_7_circle_new.h"
#include <iostream>
#include <cmath>
using namespace std;

Circle::Circle()
{
    double* Diam = NULL;
    double Radius = 0;
    double Square = 0;
    double Length = 0;
};

Circle::Circle(const Circle& obj)
{
    this->Diam = new double(*obj.Diam); // выделяет в куче память для double и прописывает туда значение *obj.Diam (этот указатель указывает на эту область памяти)
    this->Radius = obj.Radius;
    this->Square = obj.Square;
    this->Length = obj.Length;
};

Circle::Circle(double a)
{
    this->Diam = new double;
    *Diam = a * 2;
    this->Radius = a;
};

double Circle::Sq()
{
    Square = 3.14 * pow(Radius, 2);
    return Square;
}

double Circle::Len()
{
    Length = 2 * 3.14 * Radius;
    return Length;
}

void Circle::SetRadius(double a)
{
    this->Radius = a;
}

void Circle::Print()
{
    cout << "Радиус равен " << Radius << endl;
    cout << "Площадь равна " << Square << endl;
    cout << "Длина окружности равна " << Length << endl;
    cout << "Diam указывает на адрес  " << Diam << endl;
    cout << "Значение диаметра равно " << *Diam << endl;
}

void Circle::PrintRadius()
{
    cout << "Радиус равен " << Radius << endl;
}

void Circle::PrintSquare()
{
    cout << "Площадь равна " << Square << endl;
}

void Circle::PrintLength()
{
    cout << "Длина окружности равна " << Length << endl;
}

Circle::~Circle()
{
    cout << " Вызван деструктор " << endl;
    delete Diam;
    cout << "Diam указывает на адрес  " << Diam << endl;
    cout << "Значение диаметра равно " << *Diam << endl;

}