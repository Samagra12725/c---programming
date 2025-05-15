#include<iostream>
#include<string>
using namespace std;

//base/parent class
class Person{
public:
      string name;
      int age;

     /* Person(string name,int age) {
        this->name = name;
        this->age = age;
      }*/
public:
Person(){
    cout<<"Parent constructor"<<endl;
}     

~Person(){
    cout<<"Parent destructor"<<endl;
}     

};

//child/derived class 
class Student : public Person{ // Inherit properties of Person 
public:
    int rollno;

    Student(){
        cout<<"child constructor"<<endl;
    }
    ~Student(){
    cout<<"child destructor"<<endl;
    }    

    void getinfo(){
        cout<<"name :"<<name<<endl;
        cout<<"age :"<<age<<endl;
        cout<<"rollno :"<<rollno<<endl;   
    }

};
int main(){
    Student s1;
    s1.name = "rahul";
    s1.age = 21;
    s1.rollno = 487;

    s1.getinfo();
}

