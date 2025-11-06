// Constructor
// 1.The constructor is a member of class
// 2.The constructor is when object created
// 3.The constructor should have same name as class 
// 4.cannot be static,const, virtual
// 5.There is no retun type
// 6. Used for initilization and referencing
// TYPES:
// 1.Default constructor
// 2.Parametirized 
// 3.Non paramtirized 
// 4.Copy constructot


#include<iostream>
using namespace std;

class Student{
    // Data
    string name;
    int age;
    // Function
public:
    Student(string n,int a){
        name=n;
        age=a;
    }
    
};

int main(){
    Student s1("BAVII",45);
}