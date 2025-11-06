// DYNAMIC MEMORY ALLOCATION

// 1.new, new[]
// 2.delete ,deletr[]

// 1.NEW 
// new is keyword with allocates memory for single variable

#include<iostream>
using namespace std;

int main(){
    int *p=new int;

    *p=100; 
    cout<<"Value Stored in heap: "<<*p<<endl;
    delete p;
    return 0;

}