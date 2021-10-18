#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    vector<ll> vec(n);

    for(ll i = 0; i < n; ++i) cin >> vec[i];

    sort(vec.begin(), vec.end());

    cout << 1LL*(vec[n-1] * vec[n-2]) << "\n";
    return 0;
}