#include<iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for(int i = 0; i < s.length();)
    {
        if(s[i] == '.') 
        {
            cout << 0;
            i++;
        }
        
        else if(s[i] == '-' && s[i+1] == '.')
        {
            cout << 1;
            i += 2;
        }

        else if(s[i] == '-' && s[i+1] == '-')
        {
            cout << 2;
            i += 2;
        }
    }

    cout << endl;
    return 0;
}