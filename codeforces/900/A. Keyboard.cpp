#include<iostream>
using namespace std;

int main()
{
    string keys = "qwertyuiopasdfghjkl;zxcvbnm,./";

    char pos;
    string s, s1;
    cin >> pos >> s;

    int n = s.length();

    if(pos == 'R')
        for(int i = 0; i < n; ++i)
        {
            size_t f = keys.find(s[i]);
            //cout << f - 1 << " " << keys[f - 1] << " ";
            s1 +=  keys[(f - 1)];
        }

    else if(pos == 'L')
        for(int i = 0; i < n; ++i)
        {
            size_t f =  keys.find(s[i]);
            s1 +=  keys[(f + 1)];
        }
    cout << endl << s1 << endl;
}