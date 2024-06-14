#include <iostream>
#include<string>
using namespace std;
template<typename n>
int swap (n const& a,n const& b){
    n temp;
    temp=a;
    a=b;
    b=temp;
}
int main(){
   int a=33;
   int b=55;

   swap(a,b); 
   cout<<"\na="<<a<<"b="<<b<<endl;
}

 
    
    
