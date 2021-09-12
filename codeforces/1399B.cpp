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
        int a[n], b[n];
        
        for(int i = 0; i < n; ++i) cin >> a[i];
        for(int i = 0; i < n; ++i) cin >> b[i];
        
        int mina = *min_element(a, a + n);
        int minb = *min_element(b, b + n);
        
        int ans = 0;
        
		for (int i = 0; i < n; ++i) 
		{
			ans += max(a[i] - mina, b[i] - minb);
		}
		cout << ans << endl;
        
    }
    return 0;
}