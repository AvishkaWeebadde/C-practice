#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef long long ll;


void solve()
{
    int n;
    cin >> n;

    int aSum = 0, bSum = 0, cnt = 0;
    bool ex[n] = {0}

    for(int i = 0; i < n; ++i)
    {
        int a, b;
        cin >> a >> b;

        aSum += a;
        bSum += b;

        if(aSum != bSum)
            cnt++;            
    }

    if((cnt) % 2 == 0) cout << "YES\n";
    else             cout << "NO\n";
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }
    return 0;
}