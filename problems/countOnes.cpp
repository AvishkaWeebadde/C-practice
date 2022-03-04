#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1, s2 = "";
    cin >> s1;

    for(int i = 0; i < s1.length(); ++i)
    {
        if(s1[i] == '1') s2 += s1[i];
    }

    cout << "number of 1's " << s2.length() << endl;
    cout << "number of 0's " << s1. length() - s2.length() << endl;
    return 0;
}