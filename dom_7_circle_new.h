#ifndef DOM_7_CIRCLE_NEW_H
#define DOM_7_CIRCLE_NEW_H
#include <iostream>
using namespace std;

class Circle
{
    //private:
   // int N;
    double* Diam;
    double Radius;
    double Square;
    double Length;

public:

    Circle(); // конструктор по умолчанию
    Circle(double& D, int n) : Radius(D / 2), Square(3.14 * pow(D / 2, 2)), Length(3.14 * D), Diam(new double(D)) // инициализирующий конструктор
    {
       
      /*  Diam = new double();
        *Diam = D;*/
    };
    Circle(const Circle& obj); // конструктор копирования
    Circle(double r);// конструктор с параметрами
    double Sq();
    double Len();
    void SetRadius(double a);
    void Print();
    void PrintRadius();
    void PrintSquare();
    void PrintLength();

    ~Circle();

};

#endif
