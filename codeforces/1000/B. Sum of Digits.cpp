#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
typedef long long ll;

int main()
{
    string s;
    cin >> s;

    if(s.length() < 2) 
    {
        cout << 0 << endl;
        return 0;
    }

    int x = 11, count = 0;

    while(x >= 10)
    {
        x = 0;

        for(int i = 0; i < s.length(); ++i)
            x += (s[i] - '0');
        
        s = to_string(x);

        count++;
    }

    cout << count << endl;
    return 0;
}