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
        cin >> s;

        if(s[0] == s[s.length() - 1]) s = s;
        else if(s[0] == 'a' && s[s.length() - 1] == 'b') s[0] = 'b';
        else s[0] = 'a';

        cout << s << endl;
    }
    return 0;
}