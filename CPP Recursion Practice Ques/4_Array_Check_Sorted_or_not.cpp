//Check if array is sorted or not

#include <iostream>
using namespace std;

bool check_sort(int a[], int n)
{
    if (n == 1)
        return true;

    if (a[0] < a[1])
        return check_sort(a + 1, n - 1);
    else
        return false;
}

int main()
{
    int arr[5] = {4, 5, 36, 34, 67};
    if (check_sort(arr, 5))
        cout << "Sorted";
    else
        cout << "Not Sorted";
    return 0;
}