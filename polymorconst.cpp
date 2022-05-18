
#include<iostream>
using namespace std;
class Shape{
    public:
    virtual void area(){
        cout<<"calculating area of the given shape";
    }
};

class Rect:public Shape{
    int length,breadth;
    public:
    Rect(int l, int b){
        length=l;
        breadth=b;
    }
    void area(){

        cout<< "area of rectangle = "<<length*breadth<<endl;
    }
};
class Tri:public Shape{
    int base, height;
    public:
    Tri(int b, int h){
        base=b;
        height=h;
    }
    void area(){
        double ar= (base*height)/2;
        cout<< "area of triangle = "<<ar<<endl;

    }
};
class Square:public Shape{
    int side;
    public:
    Square(int s){
        side=s;
    }
    void area(){
        int ar;
        ar=(side*side);
        cout<< "area of square = "<<ar<<endl;
    }
};


int main(){
    Shape *b;
    Rect r(5,6);
    Tri t(8,10);
    Square s(5);
    b=&r;
    b->area();
    b=&t;
    b->area();
    b=&s;
    b->area();
}