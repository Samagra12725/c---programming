#include <iostream>
#include <string>
using namespace std;

//no of occurence of vovels consonant and spaces

void countChars(const string& str) {
    int vowels = 0, consonants = 0, spaces = 0;
    for (char c : str) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            vowels++;
        else if (c > 'a' && c < 'z' || c > 'A' && c < 'Z')   
            consonants++;
        else if (c == ' ')
            spaces++;
    }
    cout << "Vowels: " << vowels << ", Consonants: " << consonants << ", Spaces: " << spaces;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    countChars(str);
    return 0;
}
