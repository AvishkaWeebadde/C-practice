#include<iostream>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for(int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        vector<int> b(n);
        for(int i = 0; i < n; ++i)
        {
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());
        int sum = 0;
        for(int i = 0; i < n; ++i)
        {
            if(i < k)
                sum += max(a[i], b[i]);
            else
                sum += a[i];
        }

        cout << sum << "\n";
    }

    return 0;
}