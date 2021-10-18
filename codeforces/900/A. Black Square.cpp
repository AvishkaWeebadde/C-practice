#include<iostream>
#include<map>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    map< int, int > cal;
    int i = 0;
    for(int i = 0; i < 4; ++i)
    {
        int x;
        cin >> x;
        cal[i+1] = x;
    }

    string s;
    cin >> s;
    int tot = 0;

    for(int i = 0; i < s.length(); ++i)
    {
        tot += cal[s[i] - '0'];
    }

    cout << tot << "\n";
    return 0;
}