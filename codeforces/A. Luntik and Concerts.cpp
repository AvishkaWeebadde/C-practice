#include<iostream>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        ll a, b, c, tot;
        cin >> a >> b >> c;

        tot = a + (2 * b) + (3 * c);

        cout << 1LL * (tot % 2)  << "\n";
    }
    return 0;
}