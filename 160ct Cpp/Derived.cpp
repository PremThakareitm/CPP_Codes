#include <iostream>
using namespace std;

class Shape{
    public:
    int width,length,height,base;
    void setWidth(int w){
        width=w;
    }
    void setLength(int l){
        length=l;
    }
    void setBase(int b){
        base=b;
    }
    void setHeight(int h){
        height=h;
    }
};
class Rectangle : public Shape{
    public:
    int getArea(){
    return(width*length);
    }
};

class Triangle : public Shape{
    public:
    int getAreaT(){
        int t=(height*base)/2;
        return(t);
    }
};

int main(){
    Rectangle Rect;
    Triangle Tri;
    Rect.setWidth(12);
    Rect.setLength(2);
    Tri.setHeight(12);
    Tri.setBase(10);
    cout<<"Total Area of Triangle:"<<Tri.getAreaT()<<endl;
    cout<<"Total Area of Rectangle:"<<Rect.getArea();

return 0;
}