#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        cout << (1 << n) - 1 << "\n";
    }
    return 0;
}