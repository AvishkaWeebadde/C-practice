#include<iostream>
#include<set>
#include<string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    set<char> ch;
    for(int i = 0; i < s.length(); ++i)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
            ch.insert(s[i]);
    }

    cout << endl;
    cout << (ch.size()) << endl;
}