//Tower of Hanoi

#include <iostream>
using namespace std;
// A: Source rod , B: Helper rod , C: Destination Rod; A m n rings h aur unko C m bhejna h
// n-1 ko B m bhjdo phir jo ek bachi usko C m , then B wali ko C m
void tower_of_Hanoi(int n, char src, char dest, char helper)
{
    if (n == 0)
        return;
    tower_of_Hanoi(n - 1, src, helper, dest); // src se helper m bhejenge issey dest wala helper
    // ki trh act krega aur helper dest ho jayega
    cout << "Move " << src << " to " << dest << endl;
    tower_of_Hanoi(n - 1, helper, dest, src);
}

int main()
{
    tower_of_Hanoi(3, 'A', 'C', 'B');
    return 0;
}