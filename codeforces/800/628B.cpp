#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        set<int> l;

        for(int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            l.insert(x);
        }

        cout << l.size() << endl;
    }

    return 0;
}