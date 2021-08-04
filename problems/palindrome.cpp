#include<iostream>
using namespace std;

int main()
{

    string s;
    cin >> s;
    bool flag;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] != s[s.length()-1-i])
        {
            flag = true;
            break;
        }
    }

    if(flag == true)
     cout << "not a palindrome";
    else
     cout << "Palindrome";

    return 0;
}