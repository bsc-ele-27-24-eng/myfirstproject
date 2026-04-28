#pragma once

class Rectangle {
private:
    float mLength;
    float mWidth;

public:
    Rectangle();                         
    Rectangle(float length, float width); 
    ~Rectangle();                         

    void setLength(float length);
    void setWidth(float width);

    // getters (accessors)
    float getLength() const;
    float getWidth() const;

    float calculateArea() const;
};