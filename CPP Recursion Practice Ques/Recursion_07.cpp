//Reverse a string

#include <iostream>
using namespace std;

void reverse_str(string s)
{
    if (s.length() == 0)
        return;
    else
    {
        reverse_str(s.substr(1));
        cout << s[0] << " ";
    }
}

int main()
{
    string s = "binod";
    reverse_str(s);
}