#include<iostream>

using namespace std;
class lectuer_details{
    int n,i;
    char lecname[200];
    char subname[200];
    char coname[200];
    public:
    void lectuer_data(){
        cout<<"enter name of lecturer=";
        cin>>lecname;
        cout<<"enter name of subject=";
        cin>>subname;
        cout<<"enter name of course=";
        cin>>coname;
        cout<<"enter number of lecture=";
        cin>>n;

    }
    void display_data(){
        cout<<"lecturer Name:"<<lecname<<endl;
        cout<<"subject Name:"<<subname<<endl;
        cout<<"course Name:"<<coname<<endl;
        cout<<"number of Lectures:"<<n<<endl;
    }
};
int main(){
    lectuer_details c[5];
    c[1].lectuer_data();
    c[2].lectuer_data();
    c[3].lectuer_data();
    c[4].lectuer_data();
    c[5].lectuer_data();

    for(int i=1;i<=5;i++){
        cout<<"---------------------------------------------------------------------"<<"\n";
        c[i].display_data();
        cout<<"---------------------------------------------------------------------"<<"\n";
    }


}
