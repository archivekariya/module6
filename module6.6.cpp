#include <iostream>
#include <string>
using namespace std;

class Concatenator{
    string str;

    public:
    Concatenator(string s):str(s){

    }


    Concatenator operator+(const Concatenator& other) {
        Concatenator result = *this;
        result.str += other.str;
        return result;
    }

    void display() {
        cout<<str<< endl;
    }
};

int main() {
    Concatenator str1("Hello, ");
    Concatenator str2("world!");

    Concatenator result = str1 + str2;

    cout << "Concatenated String: ";
    result.display();

    return 0;
}
