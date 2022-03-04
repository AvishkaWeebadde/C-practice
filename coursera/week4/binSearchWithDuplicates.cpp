#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;

ll binarySearch(vector<ll> a, ll l, ll r, ll x)
{
    ll k = -1;

    for(ll b = r; b >= 1; b /= 2)
        while((a[k + b] < x)) k += b;
    
    if(a[k + 1] == x) return k + 1;
    else          return -1;
}

int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);

    for(ll i = 0; i < n; ++i)
        cin >> a[i];
    
    ll k;
    cin >> k;

    while(k--)
    {
        ll x;
        cin >> x;

        cout << binarySearch(a, 0, n - 1, x) << " ";
    }

    return 0;
}
