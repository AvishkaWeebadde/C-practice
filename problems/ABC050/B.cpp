#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> t(n);
    for(int i = 0; i < n; ++i) cin >> t[i];

    int m;
    cin >> m;

    while(m--)
    {
        int p, x, sum = 0;
        cin >> p >> x;

        vector<int> cp = t;
        cp[p-1] = x;
        for(int i : cp) sum += i;
        cout << sum << "\n";
    }

    return 0;
}