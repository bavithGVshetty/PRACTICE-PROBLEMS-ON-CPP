
#include<iostream>

using namespace std;

class Demo{
    public:
        Demo(){
            cout<<"Contructor object is created"<<endl;
        }
        ~Demo(){
            cout<<"Destructor: Object Destroyed"<<endl; 
        }
};
int main(){
    cout<<"Entering main()"<<endl;
    Demo obj;
    cout<<"Existing main()"<<endl;
    return 0;
}