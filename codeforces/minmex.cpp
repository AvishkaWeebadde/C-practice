#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        int zo = 0;
        bool zeros = false;
        for(int i = 0; i < s.length(); ++i)
        {
            if(s[i] == '0') zeros = true;
        }
        if(s[0] == '0') zo++;
        for(int i = 1; i < s.length(); ++i)
        {
            if(s[i] == '1' && s[i - 1] == '0') zo++;
        }

        if(!zeros) cout << 0 << "\n";
        else if(zo == 1) cout << 1 << "\n";
        else             cout << 2 << "\n";

    }

    return 0;
}