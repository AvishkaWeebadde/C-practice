#include<iostream>
using namespace std;

int main()
{

    string s, s1;
    cin >> s;

    for(int i = 0; i < s.length(); ++i)
    {
        if(s[i] == ',')
            s[i] = ' ';
    }

    cout << s << "\n";

    return 0;
}