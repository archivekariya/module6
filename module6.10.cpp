#include<iostream>
using namespace std;
class account{
    public:
    char name[200];
    char type[200];
    int n;
    int ba,depo,wa;

    public:
    void data(){
    cout<<"enter name=";
    cin>>name;
    cout<<"enter account type=";
    cin>>type;
    cout<<"enter account number=";
    cin>>n;
    cout<<"enter your balance amount=";
    cin>>ba;

    }
    void deposit(){
        cout<<"deposite amount=";
        cin>>depo;
        ba+=depo;
    }
    void display(){
        cout<<"Account Balance:"<<ba<<endl;
    }
        // cout << "name: "<<name<<endl;
        // cout << "account Type: "<<type<<endl;
        // cout << "account number: "<<n<<endl;
        // cout << "after Balance: "<<ba<<endl;
    
    void minimumbalance(){}
};
class curr_acc:public account{
    public:
    int minbalance=1000;
    int penalty=100;

    public:
    void withdraw(){
        
        if (ba-depo<minbalance) {
            cout<<"Withdrawal failed. Insufficient balance."<<endl;
            
        }
        ba-=depo;
        cout<<"Withdrawal is="<<depo<<endl;
        
    }
    void minimumbalance(){
        if(ba<minbalance){
            cout<<"Insufficient balance. Penalty applied."<<endl;
            ba-=penalty;
            cout<<"Penalty is="<<penalty<<endl;
        }
        
    }
    
};
class sav_acc:public account{
    public:
    float inte;
    int interestrate=0.02;
    public:
    void interest(){
        inte= ba*interestrate/100;
        ba+=inte;
        cout<<"Interest is"<<inte<<endl;
    }

    void withdraw(){
        if(ba-depo<0){
            cout<<"Insufficient balance."<<endl;
        }
        else{
            ba-=depo;
            cout<<"Withdrawal is"<<depo<<endl;
        }
    }
};

int main(){
    curr_acc c;
    sav_acc s;
    
    c.data();
    c.display();
    c.deposit();
    c.display();
    c.withdraw();
    c.display();
    c.minimumbalance();
    c.display();

    
    cout<<endl;
    
    
    s.data(); 
    s.display();
    s.deposit();
    s.display();
    s.interest();
    s.display();
    s.withdraw();
    s.display();


    return 0;
}

