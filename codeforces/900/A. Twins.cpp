#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; ++i) 
    {
        cin >> v[i];
        sum += v[i];
    }

    sort(v.begin(), v.end(), greater<int>());

    int tot = 0, count = 0, i = 0;

    while(tot <= sum)
    {
        tot += v[i];
        sum -= v[i];
        count++;
        i++;
    }

    cout << count << endl;
    return 0;
}