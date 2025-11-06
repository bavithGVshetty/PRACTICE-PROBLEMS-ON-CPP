#include<iostream>
using namespace std;

class Vehicle{
    public:
        void move()
        {
            cout<<"Vehicle moves"<<endl;
        }
};

class Car: public Vehicle{
    public:
        void ABC(){
            cout<<"Acclerator,brake,clutch"<<endl;
        }
};
class bike:public Vehicle{
    public:
        void wheelie(){
            cout<<"Bike wheelie"<<endl;
        }
}