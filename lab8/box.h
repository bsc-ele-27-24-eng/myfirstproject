#pragma once
#include <iostream>
using namespace std;
class box {
    public:
    box();
    box(const double newlength, const double newbreadth, const double newheight);
    ~box();
    double Getvolume();
    void setlength(double len);
    void setbreadth(double len);
    void setheight(double hei);
    //overload + operator to add two Box objects.
    box operator+(const box& b);
    private:
    double length; //length of a box
    double breath;  //breadth of a box
    double height;  //height of a box 
};
