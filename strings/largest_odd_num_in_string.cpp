#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "527845246";
    for (int i = s.length() - 1; i >= 0; i--) {
        if ((s[i] - '0') % 2 != 0) { // Check if the character is an odd digit
            cout << s.substr(0, i + 1) << endl;
            break;
        }
    }
}
