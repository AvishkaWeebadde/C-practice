#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;

ll fib(ll n)
{
    vector<ll> f(n + 1);   
    if(n <= 1) return n;

    f[0] = 0;
    f[1] = 1;
    ll sum = 0;

    for(ll i = 2; i <= n; ++i)
        f[i] = (f[i - 1] + f[i - 2]) % 10;
        //cout << f[i ] << " ";

    vector<ll> res(n + 1);
    for(ll i = 0; i <= n; ++i)
        cout << f[i ] << " ";
       // res[i] = (f[i] * f[i]) % 10;
    
    return f[n] % 10;
        
}

int main()
{
    ll n;
    cin >> n;
    cout << fib(n) << "ans\n";

    return 0;
}