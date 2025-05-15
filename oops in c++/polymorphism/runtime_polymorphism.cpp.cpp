#include<iostream>
#include <string>
using namespace std;

// HERE FUNCTION OVERIDDING IS DONE

class Parent{
    public:
    void getInfo(){
        cout<<"Parent class";
    }
};

class child: public Parent {
    public:
    void getInfo(){
        cout<<"child class";
    }
};

int main(){
    Parent p;
    p.getInfo();
    
    cout<<endl;
    child c;
    c.getInfo();
}

