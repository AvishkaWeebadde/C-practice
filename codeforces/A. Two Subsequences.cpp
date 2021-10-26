#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;
        string s1 = s;
        sort(s.begin(), s.end());

        //string a, b;
        //a = s[0];

       auto it = std::find(s1.begin(), s1.end(), s[0]);
        if (it != s1.end())
            s1.erase(it);

        cout << s[0] << " " << s1 << "\n";
    }
    return 0;
}