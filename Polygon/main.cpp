#include <iostream>
#include "rectangle.h"
#include "triangle.h"
using namespace std;
int main(){
    rectangle rect;
    triangle trgl;
    rect.setvalues(4,5);
    trgl.setvalues(4,5);
    cout<<rect.Area() << '\n';
    cout<<trgl.Area() << '\n';
    return 0;
    

}