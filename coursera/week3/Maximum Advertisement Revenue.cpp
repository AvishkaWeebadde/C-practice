#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    vector<ll> profit(n), clicks(n);

    for(int i = 0; i < n; ++i) cin >> profit[i];
    for(int i = 0; i < n; ++i) cin >> clicks[i];

    sort(profit.begin(), profit.end());
    sort(clicks.begin(), clicks.end());

    ll tot = 0;

    for(int i = 0; i < n; ++i)
    {
        tot += (profit[i] * clicks[i]);
    }

    cout << tot << endl;
    return 0;
}