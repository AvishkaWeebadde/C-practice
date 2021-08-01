#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int found = 1;
    
    for(int i = 1; i <= s.length(); i++)
    {
        if(s[i] == s[i-1])
        {
            found++;
            if(found == 7)
            {
                cout << "YES";
                return 0;
            }
        }
        else
        {
            found = 1;
        }
    }
    
    cout << "NO";
    
    return 0;
}