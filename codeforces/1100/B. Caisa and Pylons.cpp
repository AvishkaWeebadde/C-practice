#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;

int main()
{
    ll a = 0, b = 0, ans = 0, energy = 0, n;
    cin >> n;

    for(ll i = 0; i < n; ++i)
    {
        cin >> b;
        energy += a - b;

        if(energy < 0) 
        {
            ans += -energy;
            energy = 0;
        }

        a = b;
    }

    cout << ans << endl;
    return 0;
}