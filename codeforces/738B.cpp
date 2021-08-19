#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t, n;
    string s;

    cin >> t;
    while(t--)
    {
        cin >> n;
        cin >> s;
        char c1 = 'B', c2 = 'R';

        for(int i = 0; i < s.length() ; ++i)
        {
            if(s[i] == '?' && i % 2 == 0)
            {
                s[i] = c1;
            }
            else if(s[i] == '?' && i % 2 != 0)
            {
                s[i] = c2;
            }
            else if(s[i] == 'R')
            {
               c1 = 'B';
               c2 = 'R';
            }
           

        }

        cout << s << "\n";
    }
    return 0;
}