#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        vector<int> num(3);

        for(int i = 0; i < 3; ++i) cin >> num[i];

        int d = num[1] - num[2];
        
        if ( (num[0] + 2 * d) % num[2] == 0 || (num[2] + 2 * d) % num[0] == 0) cout << "YES\n";
        else                                cout << "NO\n"; 
    }
    return 0;
}