#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        ll n, s;
        cin >> n >> s;

        n = (n + 2) / 2;

        cout << s / n << "\n";
    }

    return 0;
}