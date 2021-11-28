#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
typedef long long ll;

void solve()
{
        string s;
        cin >> s;

        bool flag = false;

        if((s[s.length() - 1] - '0') % 2 == 0)
        {
            cout << 0 << "\n";
            return;
        }

        if((s[0] - '0') % 2 == 0)
        {
            cout << 1 << "\n";
            return;
        }

        else
        {
            for(ll i = 1; i < s.length(); ++i)
            {
                if((s[i] - '0') % 2 == 0)
                {
                    flag = true;
                    break;
                }
            }

            if(flag) cout << 2 << "\n";
            else     cout << -1 << "\n";

            return;
        }
}
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
       solve();
    }
}