#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
        int id;
    string name;
    float attendance;

    public:
        void setInput(){
            cin>> id >> name >> attendance;
        }
        bool isBelowThreshold(float threshold){
            return attendance<threshold;
        }
        void display(){
            cout<<"ID: "<<id<<", Name: "<<name<<
                ", Attendence"<<attendance<<"%"<<endl;
        }     
};  

int main(){
    int n;
    float threshold=75.0;
    cout<<"Enter the number of students: ";
    cin>>n;
// Dynamic memory allocation
    Student *s=new Student[n];
cout<<"Enter the student details:\n";
for (int i = 0; i < n; i++)
{
    s[i].setInput();
}

cout<<"The attendence below 75%"<<endl;
for (int i = 0; i < n; i++)
{
    if(s[i].isBelowThreshold(threshold)){
        s[i].display();
    }
}

delete[] s;



}