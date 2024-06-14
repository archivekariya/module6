#include<iostream>
using namespace std;

class person{
    public:
    char n[200];
    int a;
    float per,s;
    
    public:
    void name(){
        cout<<"enter your name=";
        cin>>n;
    }

     void age(){
        cout<<"enter your age=";
        cin>>a;
     }
        
};
class student:public person{

    public:
    void percentage(){
        cout<<"enter your percentage=";
        cin>>per;
    }
        
};
class teacher:public student{

    public:
    void salary(){
        cout<<"enter your salary=";
        cin>>s;
    }
       
    
};
int main(){

    teacher m;
    m.name();
    m.age();
    m.percentage();
    m.salary();
    
}