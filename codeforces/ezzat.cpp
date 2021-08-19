#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;

int main()
{
    int t, n;
    
    cin >> t;
    
    while(t--)
    {
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);
        double tot = 0.0, avg = 0;
        for(int i = 0; i < n -1; ++i)
        {
            tot += arr[i];
        }
        avg = (tot / (n - 1)) + arr[n-1];
        cout << fixed << setprecision(9) << avg << endl;
    }
}