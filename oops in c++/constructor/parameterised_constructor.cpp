#include <iostream>
#include <string>
using namespace std;
class Teacher
{
public:
    Teacher (string name,string dept,string subject) // this is parameterides constructor
    {
       this-> name = name ;
       this-> dept = dept;
       this-> subject = subject ;
    }

    // properties / attributes

    string name;
    string dept;
    string subject;

    void getInfo(){
        cout<<"name = "<<name<<endl;
        cout<<"subject = "<<subject<<endl;
        cout<<"dept = "<<dept<<endl;
    }
    
};
int main()
{
    Teacher t1("samagra" , "Computer Science" , "Data Structure");
    t1.getInfo(); 
}