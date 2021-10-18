#include<iostream>
#include<utility>
#include<algorithm>
#include<vector>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> p(n);
    
    for(int i = 0; i < n; ++i) 
    {
        int x;
        cin >> x;
        p[i].first = x;
        p[i].second = i + 1;
    }
    
    sort(p.begin(), p.end());
    
    for(int i =0; i < n; ++i)
    {
        cout << p[i].second << " ";
    }
    
    cout << endl;
    
    return 0;
}