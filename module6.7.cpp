#include<iostream>

using namespace std;
class cricketer{
    public:
    char name[200];
    int age;
    

    public:
    void data(){
        cout<<"enter name=";
        cin>>name;
        cout<<"enter age=";
        cin>>age;
    
    }

};
class runs:public cricketer{
    public:
    int totalrun,avgrun,performance;
    
    public:
    void input_data(){
        cout<<"enter total run=";
        cin>>totalrun;
        cout<<"enter performance=";
        cin>>performance;
        avgrun=totalrun/10;
        cout<<"avg run="<<avgrun;
    }
    void display(){
        cout<<"\n\nname:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"total run:"<<totalrun<<endl;
        cout<<"performance:"<<performance<<endl;
        cout<<"average run:"<<avgrun<<endl;
    }
    
};
int main(){
    runs r;
    r.data();
    r.input_data();
    r.display();

    return 0;
}