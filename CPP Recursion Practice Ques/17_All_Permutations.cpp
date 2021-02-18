#include <bits/stdc++.h>
using namespace std;

/* Approach - To generate permutations of ABC fix A and then find permutations of rest of the string and just append A to it. Again fix B and find permutation of rrest of the string and append B to it. 
*/

// TC : O(N*N!)
void permutations(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        string ros = s.substr(0, i) + s.substr(i + 1);

        permutations(ros, ans + c);
    }
}

int main()
{
    permutations("ABC", "");
    return 0;
}