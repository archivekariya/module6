#include<iostream>
using namespace std;

class interest {
    public:
    float principal;
    float year;
    float rate;

    public:
    interest(float p,float y,float r){
        principal = p;
        year = y;
        rate = r;
    }

    float simpleinterest(){
       return (principal*year*rate)/100;

       

}
    
};

int main() {
    int principal, year;
    float rate;
    
    cout<<"enter principal amount:";
    cin>>principal;

    cout<<"enter number of years:";
    cin>>year;

    cout<<"enter rate of interest (in percentage):";
    cin>>rate;

    interest e(principal,year,rate);
    

    cout<<"simple interest is:"<<e.simpleinterest()<<endl;

    return 0;
}