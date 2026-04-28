#pragma once

class Polygon {
protected:
    int mWidth;
    int mHeight;
public:
    void SetValues(int width, int height);
    virtual int Area() = 0;   // pure virtual → abstract base class
    void PrintArea();         // calls the correct derived implementation
};
