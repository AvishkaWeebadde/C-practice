#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    ll arr[n];

    arr[1] = 8;
    for(int i = 2; i <= n; ++i) arr[i] = (arr[i - 1] * 8) % 10;

    cout << arr[n] << endl;
    return 0;
}