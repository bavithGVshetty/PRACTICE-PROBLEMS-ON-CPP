// INHERITENCE
// Inheritence in OOP concept that one class
// to inherit properties and behaviors 
// form another class.
// 1.Derived class is called as child.
// 2.Reusability
// 3.Extending is possible

#include<iostream>
using namespace std;

class Vehicle{
    public: 
        int data=10;
    void move(){
        cout<<"This is Vehicle Moving"<<endl;
    }
};

// Child class
class Bicycle: public Vehicle{
    public:
        void bell(){
            cout<<"Ding Ding";
        }
};

int main(){
    Bicycle b;
    b.move();

}