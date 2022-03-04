#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solve(const vector<int> &x, int n, int l)
{
    int numRefills = 0, currRefills = 0, lastRefill;

    while(currRefills < n - 1)
    {
        lastRefill = currRefills;
        while(currRefills < n - 1 && x[currRefills + 1] - x[lastRefill] <= l) currRefills++;

        if(currRefills == lastRefill) return -1;

        if(currRefills < n - 1) numRefills++;
    }

    return numRefills;
}

int main()
{
    int d, m, n;
    cin >> d >> m >> n;
    vector<int> stops(n);

    for(int i = 0; i < n; ++i) cin >> stops[i];

    cout << solve(stops, n, m) << endl;

    return 0;
}