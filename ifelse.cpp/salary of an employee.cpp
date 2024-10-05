#include<iostream>
using namespace std;
int main()
{ 
    //g=gender , yos=year of service , q=qualification , s=salary
    char g,q;
     int yos,s;
    cout<<"enter gender,year of service,qualification";
    cin>>g>>yos>>q;
    if(g=='M'&&q=='P'&&yos>=10)
     cout<<" salary is 15,000";
      else if(g=='M'&&yos>=10&&q=='G')
       cout<<"salary is 10,000";
        else if(g=='M'&&yos<10&&q=='PG')
          cout<<"salary is 11,000";
           else if(g=='M'&&yos<10&&q=='G')
             cout<<"salary is 7,000";
               else if(g=='F'&&yos>=10&&q=='PG')       
                cout<<"salary is 13,000";
                  else if(g=='F'&&yos>=10&&q=='G')
                   cout<<"salary is 9,000";
                     else if(g=='F'&&yos<10&&q=='G')
                        cout<<"salary is 19,000";
                          else if(g=='F'&&yos<10&&q=='PG')
                        cout<<"salary is 6,000";
                          else 
                            cout<<"enter correct data";
}                      