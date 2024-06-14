#include<iostream>

using namespace std;
class bank{
    int accno,ba,da,wa;
    char name[200],acctype[200];
    
    public:
    void detail();
    void deposite();
    void withdraw();
    void display();
};
void bank::detail(){
    cout<<"depositor name=";
    cin>>name;
    cout<<"account type=";
    cin>>acctype;
    cout<<"account number=";
    cin>>accno;
    cout<<"balance amount=";
    cin>>ba;

}
void bank::deposite(){
    cout<<"deposite amount=";
    cin>>da;
    ba+=da;
}
void bank::withdraw(){
    cout<<"withdraw amount=";
    cin>>wa;
    if(wa>ba)
            cout<<"\nCannot Withdraw Amount";
        ba-=wa;
}
void bank::display(){
    cout<<"\n\nname:"<<name<<endl;
    cout<<"account type:"<<acctype<<endl;
    cout<<"account number:"<<accno<<endl;
    cout<<"current balance amount:"<<ba<<endl;

}
int main(){
    bank e;
    e.detail();
    e.deposite();
    e.withdraw();
    e.display();
}