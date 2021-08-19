#include<iostream>
#include<string>
using namespace std;


void testcase()
{
    string s;
    cin >> s;
    
    string s1 = s.substr(0, 2);
    
    for(int i = 3; i < s.length(); i+=2)
    {
        s1 += s[i];
    }
    
    cout << s1 << "\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        testcase();
    }
    return 0;
}