#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    int one = 0, zero = 0;
    for(int i = 0; i < n; ++i)
    {
        if(s[i] == '0') zero++;
        else            one++;
    }

    cout << n - (2 * min(zero, one)) << endl;
    return 0;
}