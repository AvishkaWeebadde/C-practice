#include<algorithm>
#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;\

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        ll x, y;
        cin >> x >> y;

        if(x % 2 != y % 2) cout << -1 << " " << -1 << "\n";
        else
        {
            if(x % 2)
            {
                ll cc = (max(x, y) - min(x, y)) / 2;

                if(x < y) cout << min(x, y) << " " << cc << "\n";
                else      cout << cc << " " << min(x, y) << "\n";
            }
            else cout << x / 2 << " " << y / 2 << "\n";
        }
    }

    return 0;
}