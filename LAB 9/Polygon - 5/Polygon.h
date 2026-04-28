#pragma once
//Abstract base class
class Polygon{
    protected: 
        int mWidth;
        int mHeight;
    public:
        void SetValues(int width, int height);
        virtual int Area()=0;//set as a pure virtual function
        void PrintArea();
};