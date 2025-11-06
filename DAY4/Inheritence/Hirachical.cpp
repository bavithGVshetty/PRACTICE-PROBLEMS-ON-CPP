#include<iostream>

using namespace std;

class vehicle{
    public:     
        void move(){
            cout<<"Vehicle moves "<<endl;
        }
};

class Engine{
    public:
        void start(){
            cout<<"Engine starts"<<endl;
        }
};

class Car : public vehicle ,public Engine{
    public: 
        void ABC(){
            cout<<"Accelarator, brake, clutch"<<endl;
        }

};

class Bike: public vehicle{
    public:
        void wheelie(){
            cout<<"Bike doing wheelie"<<endl;
        }
};

