// RUNTIME POLYFORMORPHISM
// The block of code exicuted during runtime

// 1.Function Overriding
// 2.Abstract classes

// 1.Function overiding

#include<iostream>
using namespace std;

class Animal{
    public:
    virtual void sound(){
        cout<<"Animal sounds"<<endl;
    }
};

class Dog:public Animal{
    public:
        void sound() override{
            cout<<"Bow Bow"<<endl;
        }
};

class Cat: public Animal{
     public:
        void sound() override{
            cout<<"Cat meows"<<endl;
        }
    };

    int main(){
        Animal *a;
        Dog d;
    a=&d;
    a->sound();
    d.sound();
    }