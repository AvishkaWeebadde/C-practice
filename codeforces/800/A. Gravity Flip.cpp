#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> b(n);

    for(int i = 0; i < n; ++i)
    {
        cin >> b[i];
    }

    sort(b.begin(), b.end());

    for(int i = 0; i < n; ++i) cout << b [i] << " ";
    cout << endl;

    return 0;
}