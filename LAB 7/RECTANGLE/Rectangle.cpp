#include "Rectangle.h"

Rectangle::Rectangle() {
    mLength = 0;
    mWidth = 0;
}


Rectangle::Rectangle(float length, float width) {
    mLength = length;
    mWidth = width;
}

Rectangle::~Rectangle() {
}

void Rectangle::setLength(float length) {
    mLength = length;
}

void Rectangle::setWidth(float width) {
    mWidth = width;
}


float Rectangle::getLength() const {
    
}

float Rectangle::getWidth() const {
    return mWidth;
}

float Rectangle::calculateArea() const {
    return mLength * mWidth;
}