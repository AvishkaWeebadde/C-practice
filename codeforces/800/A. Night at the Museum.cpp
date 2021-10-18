#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int tot = 0;

    tot += min(abs('a' - (s[0])), 26 - abs('a' - (s[0])));
    for(int i = 1; i < s.length(); ++i)
    {
        tot += min(abs(s[i - 1] - s[i]), 26 - abs(s[i - 1] - s[i]));
    }

    cout << tot << endl;
    return 0;

}
