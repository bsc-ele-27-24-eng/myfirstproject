#pragma once
#include "Polygon.h"

class Triangle : public Polygon {
public:
    Triangle(int w=0, int h=0) { SetValues(w,h); }
    int Area() override;
};
