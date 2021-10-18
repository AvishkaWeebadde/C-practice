#include <cctype>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 0; i < s.length(); ++i)
    {
        if(islower(s[i])) cnt++;
        else              cnt--;
    }

    if(cnt >= 0) transform(s.begin(), s.end(), s.begin(), ::tolower);
    else         transform(s.begin(), s.end(), s.begin(), ::toupper);

    cout << s << "\n";

    return 0;

}