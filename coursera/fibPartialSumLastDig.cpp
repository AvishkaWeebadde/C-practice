#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;

int fib(ll m, ll n)
{
    vector<ll> f(n + 1);

    if(n <= 1)
        return n;
    
    f[0] = 0;
    f[1] = 1;

    for(int i = 2; i <= n; ++i)
        f[i] = (f[i - 1] + f[i - 2]) % 10;
    
    ll sum = 0;

    for(int i = m; i <= n; ++i)
        sum += f[i];
        //res[i] = res[i - 1] + f[i];

    return sum % 10;  
}

int main()
{
    ll m, n;
    cin >> m >> n;
    cout << fib(m, n) << "\n";
    return 0;
}