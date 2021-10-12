#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int x, ans = 0; 
        cin >> x;

        for(int i = 1; i < n; ++i)
        {
            int y;
            cin >> y;
            int a = min(x, y);
            int b = max(x, y);

            while (a * 2 < b) 
            {
                ans++;
                a *= 2;
            }

            x = y;
        }

        cout << ans << "\n";
    }

    return 0;
}