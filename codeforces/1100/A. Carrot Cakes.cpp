#include<iostream>
using namespace std;

int main()
{
    int n,t, k, d;
    cin >> n >> t >> k >> d;

    if((n / k) * t > d + t) cout << "YES\n";
    else                    cout << "NO\n";
    return 0;
}