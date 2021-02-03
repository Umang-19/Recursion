//Possible words from phone 2 digits

#include <iostream>
using namespace std;

string keypad[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void KeyPad(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << " ";
        return;
    }

    char c = s[0];
    string code = keypad[c - '0'];
    string ros = s.substr(1);

    for (int i = 0; i < code.length(); i++)
    {
        KeyPad(ros, ans + code[i]);
    }
}

int main()
{
    KeyPad("23", "");
    return 0;
}