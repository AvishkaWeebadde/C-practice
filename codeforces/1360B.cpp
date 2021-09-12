#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> s(n);
        
        for(int i = 0; i < n; ++i) cin >> s[i];
        
        sort(s.begin(), s.end());
        
        vector<int> diff(n-1);
        
        for(int i = 0; i < n-1; ++i)
        {
            diff[i] = abs(s[i] - s[i+1]);
        }
        
        cout << *min_element(diff.begin(), diff.end()) << "\n";
        
    }
    return 0;
}