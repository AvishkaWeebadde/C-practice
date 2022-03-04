#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main()
{
    int n, index;
    string s;
    cin >> n >> s;
    bool marked[26];
    bool flag = false;

    for(int i = 0; i < 26; i++) marked[i] = false;

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    for(int i = 0; i < n; ++i)
    {
        index = s[i] - 97;
        marked[index] = true;
        //cout << index << endl;
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