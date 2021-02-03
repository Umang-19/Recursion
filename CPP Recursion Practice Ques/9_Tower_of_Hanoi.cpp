// Tower of Hanoi

#include <iostream>
using namespace std;

void tower_of_Hanoi(int n, char src, char dest, char helper)
{
    if (n == 0)
        return;
    tower_of_Hanoi(n - 1, src, helper, dest); 
    cout << "Move " << src << " to " << dest << endl;
    tower_of_Hanoi(n - 1, helper, dest, src);
}

int main()
{
    tower_of_Hanoi(3, 'A', 'C', 'B');
    return 0;
}