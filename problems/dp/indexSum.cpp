/* Given an array arr of integers, write a recursive function that add sum of all the previous numbers to each index of the array.
/  For example,
/  {1, 2, 3, 4, 5, 6} -> {1, 1+2, 1+2+3, 1+2+3+4, 1+2+3+4+5, 1+2+3+4+5+6}
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    arr[0] = 1;

    for(int i = 1; i < n; ++i)
    {
        arr[i] = arr[i-1] + (i + 1);
    }

    for(int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}
