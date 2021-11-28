#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
vector<ll> d(100000000);

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll x, j;
        cin >> x >> j;

        //cout << x << " " << j << endl;
        
        if(x%2) d[1] = x + 1;
        else    d[1] = x - 1;

        for(ll i = 2; i <= j; ++i)
        {
            if(d[i - 1] % 2) d[i] = d[i - 1] + i;
            else             d[i] = d[i - 1] - i;
        }

        cout << 1LL * d[j] << "\n";
    }
    return 0;
}