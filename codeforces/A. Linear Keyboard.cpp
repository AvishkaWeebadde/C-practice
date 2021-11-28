#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string keys, s;
        cin >> keys >> s;
        vector<int> c(s.length());
        for(int i = 0; i < s.length(); ++i)
        {
            size_t found = keys.find(s[i]);
            if (found != string::npos) c.push_back(found + 1);
        }

        int tot = 0;

        for(int i = 0; i < c.size() - 1; ++i)
        {
            if(c[i] == 0) continue;
            else
            {
                tot += abs(c[i] - c[i + 1]);
                //cout << tot << " = " << c[i] << " - " << c[i + 1] << endl;
            }
        }

        cout << tot << endl;

    }
}