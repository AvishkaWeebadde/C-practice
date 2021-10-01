#include<iostream>
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
        vector<int> vec(n);
        
        for(int i = 0; i < n; ++i) cin >> vec[i];
        
        vector<int> comp = vec;
        sort(comp.begin(), comp.end());
        
        for(int i = 0; i < n; ++i)
        {
            if(vec[i] != comp[1])
            {
                cout << i + 1 << "\n";
                break;
            }
        }
    }
    return 0;
}