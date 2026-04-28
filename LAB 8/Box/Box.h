#pragma once
#include <iostream>
using namespace std;

class Box {
public:
    Box();  // Default constructor
    Box(const double newLength, const double newBreadth, const double newHeight); // Parameterized constructor
    ~Box(); // Destructor

    double GetVolume();
    void SetLength(double len);
    void SetBreadth(double bre);
    void SetHeight(double hei);

    // Overload + operator to add two Box objects
    Box operator+(const Box& b);

private:
    double length;   // length of box
    double breadth;  // breadth of box
    double height;   // height of box
};