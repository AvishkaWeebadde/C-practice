// NOT WORKING

#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    set<int> s;

    for(int i = 0; i < n; ++i) 
    {
        cin >> vec[i];
    }

    //for(int i : vec) cout << i << " ";

    for(int i = 0; i < n - 1;)
    {
        //cout << "h" << endl;
        if(vec[i] <= vec[i + 1])
        {
            int count = 1;

            while(vec[i] < vec[i + 1])
            {
                count++;
                i++;
            }
            i++;
            s.insert(count);
        }
        else i++;
    }

    int res = 0;

    for(int i : s)
    {
        cout << i << " ";
        res = (res ^ i);
    }
    cout << endl;
    if(res) cout << "NO\n";
    else    cout << "YES\n";
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