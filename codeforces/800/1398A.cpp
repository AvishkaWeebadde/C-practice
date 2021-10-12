#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for(int i = 0; i < n; ++i) cin >> arr[i];

        if(arr[n-3] + arr[n-2] > arr[n-1]) cout << -1 << endl;
        else                           cout << n - 2 << " " << n - 1 << " " << n << endl;
    }

    return 0;
}