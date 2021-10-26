#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    vector<ll> c(n);

    for(int i = 0 ;i < n; ++i) cin >> c[i];

    sort(c.begin(), c.end());

    for(int i = 0; i < n; ++i)
    {
        ll mini, maxi;

        if(!i)
        {
            mini = abs(c[i] - c[i + 1]);
            maxi = abs(c[i] - c[n - 1]);
        }
        else if(i == (n - 1))
        {
            mini = abs(c[i] - c[i - 1]);
            maxi = abs(c[i] - c[0]);
        }
        else
        {
            mini = min(abs(c[i] - c[i+1]), abs(c[i] - c[i-1]));
			maxi = max(abs(c[i] - c[0]), abs(c[i] - c[n-1]));
        }

        cout << mini << " " << maxi << endl; 
    }

}