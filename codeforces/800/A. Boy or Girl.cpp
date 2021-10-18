#include<iostream>
#include<string>
#include<set>
using namespace std;

int main()
{
    string s;
    cin >> s;
    set<char> lt;

    for(int i = 0; i < s.length(); ++i)
    {
        lt.insert(s[i]);
    }

    if(lt.size() % 2) cout << "IGNORE HIM!\n";
    else              cout << "CHAT WITH HER!\n";
    return 0;
}