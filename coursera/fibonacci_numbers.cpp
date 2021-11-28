#include<iostream>
using namespace std;
typedef long long ll;

int fib(int n)
{
    if (n <= 1)
        return n;
        
    ll f[100001];
    f[0] = 0;
    f[1] = 1;

    for(int i = 2; i <= n; ++ i)
        f[i] = f[i - 1] + f[i - 2];
    
    return f[n];
}

int main()
{
    ll n;
    cin >> n;

    cout << fib(n) << endl;

    return 0;
}