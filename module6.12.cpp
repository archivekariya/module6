#include<iostream>
#include<string.h>
using namespace std;
int main(){
 
    FILE*ptr;  
    char fName[20];
 
    cout<<"\nEnter file name to create :";
    cin>>fName;
 
    ptr=fopen(fName,"w");
    
    if(ptr==NULL)
    {
        cout<<"File does not created";
        exit(0); 
    }
    cout<<"\nfile created.";
    fclose(ptr);

    
    ptr=fopen(fName,"r");
    if(ptr==NULL)
    {
        cout<<"\nCan't open file";
        exit(0);
    }
 
    fclose(ptr);
    return 0;
}