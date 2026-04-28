#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;

int main() {
    Polygon* pPoly1 = new Rectangle(4,5);
    Polygon* pPoly2 = new Triangle(4,5);


    pPoly1->PrintArea();  
    pPoly2->PrintArea();   

    delete pPoly1;
    pPoly1=nullptr;
    delete pPoly2;
    pPoly2=nullptr;
    return 0;
}
