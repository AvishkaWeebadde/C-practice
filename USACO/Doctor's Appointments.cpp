#include<iostream>
#include<utility>
#include<set>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    set<int> d;
    for(int i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;
        d.insert(x);
        d.insert(y);

        if(d.size() < i + 1)
        {
            cout << "impossible\n";
            return;
        }
    }

    for(int i : d)
        cout << i << " ";
    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }
    return 0;
}