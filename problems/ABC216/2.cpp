#include<iostream>
#include<algorithm>
#include<vector>
#include <utility>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<pair<string, string>> names(n);
    
    for(int i = 0; i < n; ++i)
    {
        cin >> names[i].first >> names[i].second;
    }
    
    sort(names.begin(), names.end());
    
    bool flag = false;
    
    for(int i = 0; i < n - 1; ++i)
    {
        if((names[i].first == names[i+1].first) && (names[i].second == names[i+1].second))
            flag = true;
    }
    
    if(flag) cout << "Yes\n";
    else     cout << "No\n";
    
    return 0;
            
}