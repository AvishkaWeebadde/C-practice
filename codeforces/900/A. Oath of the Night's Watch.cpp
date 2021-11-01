#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; ++i) cin >> a[i];
    sort(a.begin(), a.end());

    int c1 = std::count(a.begin(), a.end(), a[0]);
    int c2 = std::count(a.begin(), a.end(), a[n - 1]);

    //int c1 = 1; int c2 = 1;
    if(a[0] == a[n - 1]) cout << 0 << endl;
    else                 cout << n - c1 - c2 << endl;
    return 0;
}