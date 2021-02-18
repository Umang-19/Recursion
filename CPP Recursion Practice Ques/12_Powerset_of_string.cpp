#include <iostream>
using namespace std;

// TC : O(2^N)
void gensubstring(string str, string ans)
{
    if (str.length() == 0)
    {
        cout << "{ " << ans << " }" << endl;
        return;
    }
    char c = str[0];
    gensubstring(str.substr(1), ans);
    gensubstring(str.substr(1), ans + c);
}

void powerset(string s, int idx, string ans)
{
    if (idx == s.length())
    {
        cout << "{ " << ans << " }" << endl;
        return;
    }

    powerset(s, idx + 1, ans + s[idx]);
    powerset(s, idx + 1, ans);
}

int main()
{
    cout << "\nFunction 1 : \n";
    gensubstring("ABC", "");
    cout << "\nFunction 2 : \n";
    powerset("ABC", 0, "");
    return 0;
}