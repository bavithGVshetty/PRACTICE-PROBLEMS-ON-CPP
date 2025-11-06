#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    l.push_back(10);//at the end
    l.push_front(20);//at the begin

    for ( int i: l)
    {
        cout<<i<<" ";
    }
    
    l.pop_back();
    


}
