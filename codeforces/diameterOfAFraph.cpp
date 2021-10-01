#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        if(abs(n-m) < k) cout << "YES\n";
        else             cout << "NO\n";
    }

    return 0;
}