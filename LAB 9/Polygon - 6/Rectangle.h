#pragma once
#include "Polygon.h"

class Rectangle : public Polygon {
public:
    Rectangle(int w=0, int h=0) { SetValues(w,h); }
    int Area() override;
};
