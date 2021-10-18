#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> home(n), guest(n);

    for(int i = 0; i < n; ++i)
    {
        cin >> home[i] >> guest[i];
    }

    int cnt = 0;

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            if(j == i) continue;
            else if(home[i] == guest[j]) cnt++;
        }
    }

    cout << cnt << "\n";
}