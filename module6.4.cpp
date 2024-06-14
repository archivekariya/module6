#include<iostream>
using namespace std;
inline double square(int n){
    return(n*n);
}
inline double cube(int n){
    return (n*n*n);
}

int main(){
    int n;
    float ans;

    cout<<"enter n=";
    cin>>n;
    
    ans=square(n);
    cout<<"square of number is="<<ans<<"\n";

    ans=cube(n);
    cout<<"cube of number is="<<ans<<"\n";

    return 0;



}