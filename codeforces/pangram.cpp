#include<iostream>
using namespace std;
#include<string>
#include<algorithm>

int main()
{
    int n, index;
    string s;
    cin >> n >> s;
    bool marked[26];
    bool flag = false;

    for(int i = 0; i < 26; i++)
        marked[i] = false;
    
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    for(int i = 0; i < s.length(); i++)
    {
        index = s[i] - 97;
        marked[index] = true;
    }
    

    for(int i = 0; i < 26; i++)
    {
        if(marked[i] != true)
        {
            flag = true;
            break;
        }
    }
    
    if(flag == true)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
    
}