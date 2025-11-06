#include<iostream>

using namespace std;

class grandfather{
    public:
        void skills2(){
            cout<<"Motivational Stories\n";
        }
};

class father: public grandfather{
    public:
        void skills1(){
            cout<<"Money Making\n";
        }    
};
class child: public father{
    public:
        void skills(){
            cout<<"Easting, Sleeping, Scrolling, Gaming. etc\n";
        }
};

class daughter:public father,public grandfather{
    public:
        void swimming(){
            cout<<"She is a swimmer"<<endl;
        }
};
int main(){
    child c;
    // father f;
    c.skills1();
    c.skills();
}