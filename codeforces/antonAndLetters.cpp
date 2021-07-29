#include<iostream>
#include<string>
#include<set>
using namespace std;

int main()
{
    string s;
    set<char> line;
    
    getline(cin, s);
    
    for(int i = 0; i <= s.length(); i++)
    {
        cout << s[i] << " ";
        if(s[i] != 0x20 && s[i] != '{' && s[i] != '}' && s[i] != ',')
            line.insert(s[i]);
    }
    
    cout << line.size() - 1 << endl;
    for(auto i : line)
        cout <<"." << i << endl;
    return 0;
}