#include<iostream>
using namespace std;
typedef long long ll;

int main()
{
    ll n, k;
    cin >> n >> k;

    if(k <= (n + 1) /2) cout << 1LL * ((2 * k) - 1) << endl;
    else                cout << 1LL * ((k - (n + 1) / 2) * 2) << endl;
    return 0;
}