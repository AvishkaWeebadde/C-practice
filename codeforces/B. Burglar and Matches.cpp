#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;
typedef long long ll;

bool sortlarger(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return a.first > b.first;
}

int main()
{
    ll n, m;
    cin >> n >> m;

    vector<pair<ll, ll>> mb(m);

    for(ll i = 0; i < m; ++i)
        cin >> mb[i].second >> mb[i].first;

    sort(mb.begin(), mb.end(), sortlarger);

     //for(int i = 0; i < m; ++i) cout << mb[i].first << " " << mb[i].second << endl;
     //cout << endl;

    ll sum = 0;

    for(int i = 0; i < m; ++i)
    {
        if(mb[i].second <= n)
        {
            sum += (mb[i].first * mb[i].second);
            n -= mb[i].second;
        }

        else 
        {
            sum += n * mb[i].first;
            n = 0;
        }

        if(n == 0) break;
    } 

    cout << sum << "\n";
}