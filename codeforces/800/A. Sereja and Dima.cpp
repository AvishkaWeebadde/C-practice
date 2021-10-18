#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int l = 0, r = n - 1, s = 0, d = 0, turn = 0;

    while(l <= r)
    {
        turn++;
        if(arr[l] >= arr[r])
        {
            if(turn % 2) s += arr[l];
            else         d += arr[l];
            l++;
        }
        else 
        {
            if(turn % 2) s += arr[r];
            else         d += arr[r];
            r--;
        }
    }

    cout << s << " " << d << "\n";
    return 0;
}