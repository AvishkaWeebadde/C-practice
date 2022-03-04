#include<iostream>
#include<vector>

using namespace std;



int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<string> ch(n-2, "");

        for(int i = 0; i < n -2; ++i) 
        {
            string c;
            cin >> ch[i];
        }

        for(int i = 0; i < n - 2; ++i) 
        {
            //cout << ch[i];
            if(ch[i][1] != ch[i+1][0])
    }
    return 0;
}