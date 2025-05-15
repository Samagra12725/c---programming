#include <bits/stdc++.h>
using namespace std;
string reverse_word(string s)
{
    int n = s.length();
    string word;
    string ans;
    reverse(s.begin(), s.end());
    for (int i = 0; i < n; i++)
    {
        word = "";

        while (i < n && s[i] != ' ')
        {                          
            word = word + s[i];  // line 13 to 17 extracting word from reversedstring
            i++;
        }

        reverse(word.begin(), word.end()); // this line reversing the word which extracted from reversed string
        if (word.length() > 0)
        {
            ans = ans + " " + word; // here extracted reversed string will appending to the end of the new string ans
        }
    }
    return ans.substr(1);
}

int main()
{
    string str;
    cout << "enter string";
    getline(cin, str); // is used to store the word in o/p after hitting space
    cout << reverse_word(str);
}