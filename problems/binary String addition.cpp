#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    int n = (s1.length() >= s2.length()) ? s1.length() : s2.length();

    string ans = "";
    bool carry = false;

    for(int i = 0; i < n; ++i)
    {
        int i1 = s1.length() - 1 - i;
        int i2 = s2.length() - 1 - i;

        int count_ones = 0;

        if(i1 >= 0 && s1[i1] == '1') count_ones++;
        if(i2 >= 0 && s1[i2] == '1') count_ones++;
        if(carry)                    count_ones++;

        if(count_ones % 2 == 0) ans += '0';
        else                    ans += '1';

        if(count_ones > 1) carry = true;
        else               carry = false;
    }

    if(carry) ans += '1';
    reverse(ans.begin(), ans.end());

    cout << ans << "\n";
}