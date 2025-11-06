// OOPs
// Paradigm based on the concept of Object.
// USES
// Reusable
// Organized
// Effiecient
// Secure
// EIAP
// CLASSES AND OBJECTS
// 1.CLASS:- A blueprint that define data and function.
// Access modifiers- Private,Public,protected
// Class has data and function members
#include<iostream>
using namespace std;
class Student{
    // Data
public:
    string name;
    int age;
    // Function
    void display(){
        cout<<"Name: "<<name<<"\nAge: "<<age<<endl;
    }
};
int main(){
    Student s1;
    s1.name="JAGADEESH";
    s1.age=20;
    s1.display();
    // SECOND DATA
    s2.name="BAVII";
    s2.age=45;
    s2.display();
    return 0;
}


