#include<iostream>
using namespace std;

class matrix{
    int r=0,c=0,i=0,j=0,e[10][10];
    
	public:
    matrix get()
    {
        cout<<"Enter the no. of rows of matrix:";
        cin>>r;
        cout<<"Enter the no. of columns of matrix:";
        cin>>c;
        cout<<"Enter the elements of the matrix:"<<"\n";
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                cin>>e[i][j];
            }
        }
    }
    matrix operator+(matrix m){
        matrix sum;
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                sum.e[i][j]=this->e[i][j]+m.e[i][j];
            }
        }
        return sum;
    }
    void display(){
        for(i=0;i<r;i++){
            cout<<endl;
            for(j=0;j<c;j++){
                cout<<this->e[i][j]<<"  ";
            }
        }
    }
};
int main()
{
    
    matrix m1;
	matrix m2;
	matrix m3;

    cout<<"1st matrix:"<<endl;
    m1.get();
    m1.display();
	cout<<endl;
    cout<<"2nt matrix:"<<endl;
    m2.get();
    m2.display();
	cout<<endl;
    m3=m1+m2;
    cout<<"The sum of the two matrix is:"<<endl;
    m3.display();

    return 0;
}