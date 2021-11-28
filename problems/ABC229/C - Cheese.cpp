#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#include<string>
using namespace std;
typedef long long int ll;

int main()
{
    ll n, w;
    cin >> n >> w;

    vector<pair<ll, ll>> del(n);

    for(ll i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;

        del[i].first = x;
        del[i].second = y;
    }

    //cout << endl << endl;
    //for(int i = 0; i < n; ++i) cout << del[i].first << " " << del[i].second << endl;

    sort(del.begin(), del.end());
    reverse(del.begin(),del.end());

    ll i = 0, top = 0;

    for(auto &nx : del){
        top += nx.first*min(w,nx.second);
        w-=min(w,nx.second);
    }

    cout << to_string(top) << "\n";


}