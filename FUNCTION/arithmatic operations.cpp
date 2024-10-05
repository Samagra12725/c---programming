#include<iostream>
using namespace std;

//ADDITION

int sum(int a,int b,int c)
{
   int ans = a+b+c;
    return ans;
}

//MULTIPLICATION

int mul(int a,int b,int c)
{
   int ans = a*b*c;
    return ans;
}

 // SUBTRACTON

int diffrence(int a,int b,int c)
{
   int ans = a-b-c;
    return ans;
}

 //DIVISION

int division(int a,int b,int c)
{
   int ans = a+b+c;
    return ans;
}
int main()
{
    int x,y,z;
    cout<<"ente three numbers:";
    cin>>x>>y>>z;
    
    cout<<"sum = "<<sum(x,z,y)<<endl;
    cout<<"multiplication = "<<mul(x,y,z)<<endl;
    cout<<"subtraction = "<<diffrence(x,y,z)<<endl;
    cout<<"division = "<<division(x,y,z)<<endl;

}