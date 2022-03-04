#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<string> ch(n - 2, "");

        for(int i = 0; i < n - 2; ++i) cin >> ch[i];

        string s = "";
        s += ch[0];

        for(int i = 1; i < n - 3; ++i)
        {
            if(ch[i - 1][1] == ch[i][0]) s += ch[i][1];
            else                           s += ch[i];
        }

        if(ch.size() > 1) s += ch[ch.size() - 1];

        if(s.size() == n) cout << s << "\n";
        else
        {
            for(int i = 0; i < (n - s.size()); ++i)
            {
                s += "b";
            }

             cout << s << endl;
        }

        s = "";
       
    }
    return 0;
}