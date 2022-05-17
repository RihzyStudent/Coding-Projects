#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {

    Rectangle rect1(10,20);
    Rectangle rect2(50,100);
    Rectangle rect3(10,20);
    Rectangle resultRect;

    resultRect = rect1+rect2;

    cout<<"rect1 == rect3? "<<boolalpha<<(rect1==rect3)<<'\n';

    cout<<"resultRectangle length*width: "<<resultRect.getLength()
    <<" * "<<resultRect.getWidth()<<'\n';
    cout<<"result rectangle area: "<<resultRect.area()<<'\n';

    cout<<"Rect2 != resultRect? "<<boolalpha<<(rect2!=resultRect)<<'\n';
    return 0;
}
