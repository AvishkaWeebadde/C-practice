#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;
        set<ll> nums;

        for(ll i = 0; i < n; ++i)
        {
            ll x;
            cin >> x;
            nums.insert(x);
        }

        for(ll i : nums)
            cout << i << endl;
    }

    return 0;
}