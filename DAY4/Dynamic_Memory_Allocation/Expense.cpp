#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number of activities\n";
    cin>>n;
    //Dynamic Memory allocation
    int *expenses=new int[n];
    cout<<"Enter the cost of each activity: "<<endl;
    for(int i=0;i<n;i++){
        cin>>expenses[i];
    } 
    int total=0;
    for(int i=0;i<n;i++){
        total+=expenses[i];
    }
    cout<<"total expenses: "<<total<<endl;

    delete [] expenses;
    return 0;
}