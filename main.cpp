#include <iostream>
#include "klasy.h"
using namespace std;



int main()
{
    Square Squares[10] = {
            Square("K1", 9),
            Square("K2", 13),
            Square("K3", 4),
    };
    Rectangle Rectangles[10] = {
            Rectangle("R1", 1 , 2),
            Rectangle("R2", 7 , 3),
            Rectangle("R3", 12, 29),
    };
    Circle Circles[10] = {
            Circle("C1", 17),
            Circle("C2", 3),
            Circle("C3", 2),
    };

    for(int i =0; i<10; i++)
    {
        Squares[i].show();
    }

    for(int i =0; i<10; i++)
    {
        Rectangles[i].show();
    }

    for(int i =0; i<10; i++)
    {
        Circles[i].show();
    }

    cout << "Istnieje: " << Square::numberOfSquares() << " kwadratow." << endl;
    cout << "Istnieje: " << Rectangle::numberOfRectangles() << " prostokotow." << endl;
    cout << "Istnieje: " << Circle::numberOfCircles() << " kol." << endl;
}