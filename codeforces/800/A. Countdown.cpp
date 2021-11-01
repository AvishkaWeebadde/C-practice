#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        int count = 0;

        if((s[n - 1] - '0') != 0) count += (s[n - 1] - '0');
        //cout << "count " << count << endl;

        for(int i = n - 2; i >= 0; --i)
        {
            //cout << "for position " << i << " in number - >" <<s[i] - '0' << endl;
            if((s[i] - '0') != 0)
            {
                count += (s[i] - '0');
                //cout << "count " << count << endl;
                count++;
            }
        }

        cout << count << "\n";
        
    }
    return 0;
}