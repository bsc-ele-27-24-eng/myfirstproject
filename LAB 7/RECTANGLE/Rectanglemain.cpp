#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {

    Rectangle rect1;
    float length, width;

    cout << "Enter length for rectangle 1: ";
    cin >> length;
    cout << "Enter width for rectangle 1: ";
    cin >> width;

    rect1.setLength(length);
    rect1.setWidth(width);

    cout << "Area of rectangle 1: " << rect1.calculateArea() << endl;

    
    float length2, width2;

    cout << "\nEnter length for rectangle 2: ";
    cin >> length2;
    cout << "Enter width for rectangle 2: ";
    cin >> width2;

    Rectangle rect2(length2, width2);

    cout << "Area of rectangle 2: " << rect2.calculateArea() << endl;

    return 0;
}