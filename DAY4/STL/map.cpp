// MAP
// Stores the elements in key value fashion
// key unique
// Values can be modified
//Stored in sorted order

#include<iostream>
#include<map>
using namespace std;

int main(){
    map <int, string> mp;

    mp[29]="Chenna redddy";
    mp[07]="Nitini bannur";

    for(auto &i:mp){
        cout<<i.first<<"-->"<<i.second<<endl;
    }
    
    
}
