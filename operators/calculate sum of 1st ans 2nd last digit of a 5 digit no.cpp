#include<iostream>
using namespace std;
main(){
    int first,second,third,fouth,fifth,n,sum;
    cout<<"enter a 5 digit no.";
    cin>>n;
    first=n/10000;
    n=n%10000;
    second=n/1000;
    n=n%1000;
    third=n/100;
    n=n%100;
    fouth=n/10;
    n=n%10;
    fifth=n/1;
    n=n%1;
    sum=first+fouth;
    cout<<"sum of first and second last digit no is:"<<sum;

}