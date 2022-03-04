#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        if(n > 2) cout << "NO\n";
        else if(n == 2 && s[0] == s[1]) cout << "NO\n";
        else cout << "YES\n";
    }
    
    return 0;
}