// Abstraction
// 1.To achieve data hiding
// CAN BE ACHIEVED IN TWO WAYS
// 1.Using Abstract class 
// 2.Using Abstract specifiers(private,protected)

// 1.Abstract class
// An abstract class is class that connot be given instance.
// Achieved using virtual keyword
#include<iostream>
using namespace std;
class Shape{
    public:
    // pure virtual function
    virtual void draw()=0;

    void areaMessage(){
        cout<<"Calculating area of shape.."<<endl;
    }
};
class Circle:public Shape{
    public:
        void draw() override{
            cout<<"Drawing Circle"<<endl;
        }
};
class Rectangle:public Shape{
    public:
        void draw() override{
            cout<<"Drawing Rectangle"<<endl;
        }
};

int main(){
    Shape *shape=new Circle();
    Shape *shape1=new Rectangle();

    shape->draw();
    shape1->draw();

}