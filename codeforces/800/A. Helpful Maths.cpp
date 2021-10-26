#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string s1 = "";
    for(int i = 0; i < s.length(); ++i)
    {
        if(s[i] != '+') s1 += s[i];
    }

    sort(s1.begin(), s1.end());
    int j = 0;
    for(char i : s1)
    {
        if(j != s1.length() - 1)
        {
            cout << i << "+";
            j++;
        }
        else 
        {
            cout << i << endl;
        }
    }
    cout << endl;
    return 0;
}