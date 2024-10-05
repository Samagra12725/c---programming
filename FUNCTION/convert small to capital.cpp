//covert small letter into capital letter
#include<iostream>
using namespace std;
char convert(char name)
{
    char ans = name -'a' + 'A';
    return ans;
}
int main()
{
    char ch;
    cout<<"enter character like a,b,c,d....:";
    cin>>ch;
    cout<<convert(ch);
}