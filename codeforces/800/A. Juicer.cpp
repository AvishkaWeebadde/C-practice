#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;

int main()
{
    int n, b, d;
    cin >> n >> b >> d;

    ll tot = 0, t = 0;

    for(int i = 0; i < n; ++i)
    {
        ll x;
        cin >> x;
        if(x > b) continue;
        else
        {
            tot += x;
            if(tot > d)
            {
                t++;
                tot = 0;
            }
        }
    }
    

    cout << 1LL*t << endl;
    return 0;
}