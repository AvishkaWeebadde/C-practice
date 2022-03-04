#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s, t;
        cin >> s >> t;

        sort(s.begin(), s.end());

        vector<int> str(26, 0);
        for(int i = 0; i < s.length(); ++i) str[s[i] - 'a']++;

        if(t != "abc" || !str[0] || !str[1] || !str[2]) cout << s << endl;
        else
        {
            //ll founda = s.find_last_of('a');
            //ll foundb = s.find_last_of('b');
            //ll foundc = s.find_last_of('c');

            while(str[0]--)cout<<"a";
            while(str[2]--)cout<<"c";
            while(str[1]--)cout<<"b";
            for(int i = 3;i < 26; ++i){
                while(str[i]--) cout<<char('a' + i);
            }

            cout << "\n";
        }
    }

    return 0;
}