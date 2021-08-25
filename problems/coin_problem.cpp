#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int> deno = {200, 100, 50, 20, 10, 5, 2, 1};
    vector<int> ans;
    int v;
    cin >> v;

    while(v != 0)
    {
        auto k = lower_bound(deno.begin(), deno.end(), v);
        cout << deno[deno.begin() - k] << "\n";
        v -= deno[deno.begin() - k];
        cout << v << "v\n";
    }

    return 0;
}