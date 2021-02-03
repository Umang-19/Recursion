//First and last occurrence of ele in an array

#include <iostream>
using namespace std;

int first_occ(int a[], int n, int ele, int count)
{
    if (a[0] == ele)
        return count;
    else
    {
        count++;
        return first_occ(a + 1, n - 1, ele, count);
    }
}

int last_occ(int a[], int n, int ele, int count)
{
    if (a[n - 1] == ele)
        return count;
    else
    {
        count--;
        return last_occ(a, n - 1, ele, count);
    }
}

int main()
{
    int arr[5] = {3, 5, 4, 4, 8};
    cout << first_occ(arr, 5, 4, 0) << endl;
    cout << last_occ(arr, 5, 4, 4);
    return 0;
}