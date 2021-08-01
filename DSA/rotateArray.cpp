#include<iostream>
using namespace std;

int main()
{
    int t, n , k;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> n >> k;
        int arr[n];

        for(int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }

        k = k % n;
        cout << k << endl;
        for(int j = 0; j < n; j++)
        {
            cout << arr[(n + j - k) % n] << " ";
        }

        cout << endl;
    }
    return 0;
}