#include<iostream>
using namespace std;
typedef long long ll;

int main()
{
    ll n, x;
    cin >> n >> x;
    ll cnt = 0;
    for(ll i = 0; i < n; ++i)
    {
        ll p;
        char c;
        cin >> c >> p;

        if(c == '+') x += p;
        else
        {
            if(x < p) cnt++;
            else x -= p;
        }
    }

    cout << x << " " << cnt << "\n";

    return 0;
}