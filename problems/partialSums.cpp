#include<iostream>
using namespace std;
const int NMAX = 1000001;
int sum[NMAX];

int main()
{
    int n, q1, q2;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    sum[0] = arr[0];

    for(int i = 1; i < n; ++i)
    {
        sum[i] = arr[i] + sum[i-1];
    }

    for(int i = 0; i < n; ++i)
    {
        cout << sum[i] << " ";
    }
    cout << endl;
    cin >> q1 >> q2;

    cout << sum[q2] << sum[q1-1] << "\n";
    return 0;
}