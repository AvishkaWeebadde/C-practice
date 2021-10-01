#include<iostream>
#include<string>
using namespace std;


void solve()
{
    string s;
    cin >> s;
    int count = 0;

    for(int i = 0; i < s.length(); ++i)
    {
        if(s[i] == 'B')
        {
            count++;
        }
    }

    if(s.length() % 2 != 0)
    {
        cout << "NO\n"; 
    }
    else if(count == s.length() / 2)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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