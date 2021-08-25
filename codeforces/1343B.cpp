#include<iostream>
using namespace std;

// balanced array
void solve(int n)
{
    for(int i = 1; i <= n; ++i)
    {
        cout << i * 2 << " ";
    }
    
    for(int i = 1; i < n; ++i)
    {
        cout << i * 2 - 1 << " ";
    }
    
    cout << 3 * n - 1 << "\n";
}

int main()
{
    int t, n;
    cin >> t;
    
    while(t--)
    {
        cin >> n;
        if(n % 4 != 0) 
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            solve(n / 2);
        }
    }
    
    return 0;
}