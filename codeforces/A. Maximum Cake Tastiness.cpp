#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> p(n);

        for (int i = 0; i < n; ++i)
            cin >> p[i];

        sort(p.begin(), p.end(), greater<int>());

        cout << p[0] + p[1] << "\n";
    }
    return 0;
}