#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[] = {-1, 2, 4, -3, 5, 2, -5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int best = 0, sum = 0;

    for(int k = 0; k < n; ++k)
    {
        cout << "for k = " << k << ", initial sum = " << sum << "\n";
        cout << "for k = " << k << ", arr[k] = " << arr[k]  << ", sum + arr[k] = " << sum + arr[k] << "\n";
        sum = max(arr[k], sum + arr[k]);
        cout << "for k = " << k << ", sum = " << sum << "\n";
        best = max(best, sum);
        cout << "for k = " << k << ", best is " << best << "\n";
    }

    cout << "maximum subarray sum : " << best << "\n";
    return 0;
}