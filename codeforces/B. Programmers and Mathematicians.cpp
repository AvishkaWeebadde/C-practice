#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, m;
    cin >> n >> m;

    cout << min((n + m) / 4, min(n, m)) << "\n";
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