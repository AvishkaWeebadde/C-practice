#include<iostream>
using namespace std;
typedef long long ll;

ll fib(ll n)
{
    ll f[n + 1];

    if (n <= 1)
        return n;
        
    //ll f[100001];
    f[0] = 0;
    f[1] = 1;

    for(ll i = 2; i <= n; ++i)
        f[i] = (f[i - 1] + f[i - 2]) % 10;

    int sum = 0;
    for(ll i = 0; i <= n; ++i)
        sum += f[i];

    return sum % 10;    

}

int main()
{
    ll n;
    cin >> n;
    cout << fib(n) << "\n";
    return 0;
}