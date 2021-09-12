#include<iostream>
#include <cmath>
using namespace std;

void solve()
{
    int k, n;
    cin >> k >> n;
    int i = 2;
    while(i * i < n && n > 1)
    {
        n /= 10;
        int r = n % 10;
        if(n % i == 0)
            break;
        n  = (n * 10) + r;
        k--;
        i++;
    }

    cout << k << "and\n" << n << "*\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}