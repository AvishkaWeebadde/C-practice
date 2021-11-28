#include<iostream>
using namespace std;
typedef long long ll;

void fib(int n)
{
    ll f[n + 1];
    f[0] = 0;
    f[1] = 1;

    for(int i = 2; i <= n; ++ i)
        f[i] = (f[i - 1] + f[i - 2] ) % 10;
    
    cout  << f[n] % 10 << endl;
}

int main()
{
    ll n;
    cin >> n;

    fib(n);

    return 0;
}