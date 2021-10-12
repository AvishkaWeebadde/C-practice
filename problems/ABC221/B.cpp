#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    for(int i = 0; i < s1.length() - 1; ++i)
    {
        if(s2[i] == s1[i+1] && s2[i+1] == s1[i])
        {
            char x = s2[i];
            s2[i] = s2[i+1];
            s2[i+1] = x;
        }
    }

    //cout << s1 << " " << s2 << "\n";
    if(s1 == s2) cout << "Yes\n";
    else         cout << "No\n";

    return 0;
}