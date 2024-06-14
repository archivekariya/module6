#include <iostream>
using namespace std;
class number{
    public:
    int a;
    int b;
    int t;

    public:
    void data(){ 
    a=33;
    b=55;
}
    void swap(){
        t=a;
        a=b;
        b=t;
    
}
friend int display(number v);
};
int display(number v){
    cout<<"\na="<<v.a<<"b="<<v.b;
}
int main(){
    number v;
    v.data();
    display(v);
    v.swap();
    display(v);
    
    
    return 0;
}


