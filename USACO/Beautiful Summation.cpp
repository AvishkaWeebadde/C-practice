#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;

const ll NMAX = 100001;

int main()
{
    ll p, q, n, m;
    cin >> p >> q >> n >> m;

    // Sn = p^k * k^q 
    ll ans[n];
    ans[1] = p;

    for(int i = 2; i <= n; ++i)
    {
        ans[i] = ans[i - 1] % m+ (pow(p, i) * pow(i, q));
        ans[i] = ans[i] % m;
        //cout <<  (pow(p, i+1) * pow(i + 1, q)) << " ";
    }

    cout << ans[n] % m << endl;
    return 0;
}