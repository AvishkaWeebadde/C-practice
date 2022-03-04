#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int l = s.length();
    int x = stoi(s);

    if(x > 41) x += 1;

    cout << "AGC";
    for(int i = 0; i < (3 - l); ++i) cout << "0";
    cout << to_string(x) << endl;

    return 0;
}