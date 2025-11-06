#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    multiset<int> ms;
   ms.insert(30);
   ms.insert(30);
   ms.insert(40);
   ms.insert(10);
   
   for(int i:ms){
    cout<<i<<" ";
   }


}
