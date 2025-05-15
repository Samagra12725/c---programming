#include<iostream>
#include <string>
using namespace std;

// HERE FUNCTION OVERIDDING IS DONE

class Parent{
    public:
    void getInfo(){
        cout<<"Parent class";
    }
    virtual void hello(){
        cout<<"hello from parent";
    }
};

class child: public Parent {
    public:
    void getInfo(){
        cout<<"child class";
    }
    void hello(){
        cout<<"hello from child";
    }
};

int main(){
    Parent p;
    p.getInfo();
    
    cout<<endl;
    child c;
    c.hello();
    cout<<endl;
    c.getInfo();
}