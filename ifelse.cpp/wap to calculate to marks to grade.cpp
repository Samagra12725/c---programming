#include<iostream>
using namespace std;
main()
{
    float grade;
    cout<<"enter grade:";
    cin>>grade;
    if(grade>=90)
    {
        cout<<"grade=A+\n";
    }
    else if(grade>=80)
    {
        cout<<"grade=A\n";
    }
    else if(grade>=70)
    {
        cout<<"grade=B+\n";
    }
    else if(grade>=60)
    {
        cout<<"grade=B\n";
    }
    else if(grade>=50)
    {
        cout<<"grade=C\n";
    }
    else if(grade>=40)
    {
       cout<<"grade=D\n";
    }
    else if(grade>=30)
    {
        cout<<"grade=E\n ";
    } 
    else if(grade<=30)
    {
        cout<<"grade=F";
    }
    else {
        cout<<"enter valid marks";
    }



}
