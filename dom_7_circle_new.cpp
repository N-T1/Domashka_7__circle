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
    this->Diam = new double(*obj.Diam); // �������� � ���� ������ ��� double � ����������� ���� �������� *obj.Diam (���� ��������� ��������� �� ��� ������� ������)
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
    cout << "������ ����� " << Radius << endl;
    cout << "������� ����� " << Square << endl;
    cout << "����� ���������� ����� " << Length << endl;
    cout << "Diam ��������� �� �����  " << Diam << endl;
    cout << "�������� �������� ����� " << *Diam << endl;
}

void Circle::PrintRadius()
{
    cout << "������ ����� " << Radius << endl;
}

void Circle::PrintSquare()
{
    cout << "������� ����� " << Square << endl;
}

void Circle::PrintLength()
{
    cout << "����� ���������� ����� " << Length << endl;
}

Circle::~Circle()
{
    cout << " ������ ���������� " << endl;
    delete Diam;
    cout << "Diam ��������� �� �����  " << Diam << endl;
    cout << "�������� �������� ����� " << *Diam << endl;

}