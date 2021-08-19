#include<iostream>
#include <cstdlib>
using namespace std;
typedef long long ll;

void solve()
{
    int a, b;
    cin >> a >> b;
    int diff  = abs(a - b);
    
    cout << (diff + 9) / 10 << "\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}