#include<iostream>
using namespace std;
typedef long long int ll;


void solve()
{
    ll n;
    int l, count = 0;
    cin >> l >> n;

    if(n == 0)
    {
        cout << 0 << "ans\n";
        return;
    }
    int r;

    while(n > 0)
    {
        r = n % 10;

        if(r == 0) count++;
        else if(r > 0)    count += r;

        n = (n-r) / 10;
    }

    cout << count << "ans\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}