#include<iostream>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        ll tot = 0;

        for(int i = 0; i < n; ++i)
        {
            ll x;
            cin >> x;
            tot += x;
        }

        ll extraCars = tot % n;
        // n - extraCars no. of lanes have equal number of cars. So the extra is common for all those lanes. Therefore the inconvenience is (n-extra) lanes times extra cars.

        cout << (n - extraCars) * extraCars << "\n";
    }
    return 0;
}