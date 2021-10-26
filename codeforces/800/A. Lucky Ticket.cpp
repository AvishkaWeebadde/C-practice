#include<iostream>
using namespace std;

void solve()
{
    string s;
    int n;
    cin >> n >> s;

    for(int i = 0; i < n; ++i)
    {
        if(s[i] != '4' && s[i] != '7')
        {
            cout << "NO\n";
            return;
        }
    }

    int t1 = 0, t2 = 0;
    for(int i = 0; i < n / 2; ++i)
    {
        t1 += (s[i] - '0');
        t2 += (s[n - 1 - i] - '0');
    }

    if(t1 != t2) cout << "NO\n";
    else         cout << "YES\n";
}
int main()
{
    int t;
    solve();
}