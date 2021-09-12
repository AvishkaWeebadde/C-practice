#include<iostream>
using namespace std;

int findpeak(int arr[], int low, int high, int n)
{
    int mid = low + (high - low) / 2;

    if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n - 1 || arr[mid + 1] <= arr[mid]))
        return mid;
 
    else if (mid > 0 && arr[mid - 1] > arr[mid])
        return findpeak(arr, low, (mid - 1), n);
 
    else
        return findpeak(arr, (mid + 1), high, n);
}

int main()
{
    int arr[] = { 1, 3, 20, 4, 1, 0 };

    cout << arr[findpeak(arr, 0, sizeof(arr) / sizeof(arr[0]) - 1, sizeof(arr) / sizeof(arr[0]))];

    return 0;
}