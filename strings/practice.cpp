#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    // In this last character is always be null
    char a[6] = {'A', 'P', 'P', 'P', 'L', 'E'};
    cout << a;

    char arr[10];
    cin >> arr;
    arr[2] = '\0';
    cout << arr;

    // getline is used to print the word after hitting enter,tab and spacebar without using this we cannot print after space
    string s = "samagra jaiswal";
    getline(cin, s);
    cout << s << endl;
    s[2] = 'x';
    s.push_back('la');
    cout << s << endl;
    cout << s.size();
    s.push_back('la');

    string s1 = "roht";
    s1 = s1 + "dfs";
    cout << s1 << endl;
    string s2 = "moght";
    cout << s1.append(s2) << endl;

    string x = "i am \"good\" boy";
    cout << x;

    


}