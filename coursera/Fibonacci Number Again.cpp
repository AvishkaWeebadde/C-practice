#include <iostream>
using namespace std;
typedef long long ll;
 
// Calculate and return Pisano Period
// The length of a Pisano Period for
// a given m ranges from 3 to m * m
ll pisano(ll m)
{
    ll prev = 0;
    ll curr = 1;
    ll res = 0;
 
    for(int i = 0; i < m * m; i++)
    {
        ll temp = 0;
        temp = curr;
        curr = (prev + curr) % m;
        prev = temp;
 
        if (prev == 0 && curr == 1)
            res = i + 1;
    }
    return res;
}
 
ll fibonacciModulo(ll n, ll m)
{
    ll pisanoPeriod = pisano(m);
 
    n = n % pisanoPeriod;
 
    ll prev = 0;
    ll curr = 1;
 
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
 
    for(int i = 0; i < n - 1; i++)
    {
        ll temp = 0;
        temp = curr;
        curr = (prev + curr) % m;
        prev = temp;
    }
    return curr % m;
}
 
int main()
{
    ll n, m;
    cin >> n >> m; 
 
    cout << (fibonacciModulo(n, m));
    return 0;
}
 