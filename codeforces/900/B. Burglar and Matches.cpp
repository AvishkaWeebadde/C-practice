#include<iostream>
#include <utility>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;

bool sortbysecdesc(const pair<int,int> &a, const pair<int,int> &b)
{
    return a.second>b.second;
}

int main()
{
    ll n, m;
    cin >> n >> m;

    vector<pair<ll, ll>> match(m);

    for(ll i = 0; i < m; ++i)
        cin >> match[i].first >> match[i].second;
    
    sort(match.begin(), match.end(), sortbysecdesc);

    //for(ll i = 0; i < m; ++i)
        //cout << match[i].first << " " << match[i].second << endl;
    
    ll ans = 0;

    for(int i = 0; i < m; i++)
    {
        if(match[i].first <= n){
            ans += (match[i].first)*(match[i].second);
            n  -= match[i].first;
        }
        else
        {
            ans += n *(match[i].second);
            n = 0;
        }

        if(n <= 0)
            break;
    }

    cout << ans << endl;

    return 0;
}