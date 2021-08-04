#include<iostream>
using namespace std;

int main()
{
    int t, n, k1, k2, w, b;
    
    cin >> t;
    
    for(int i =0; i < t; ++i)
    {
        cin >> n >> k1 >> k2 >> w >> b;
        
        if((k1+k2 >= 2 * w) && ((n-k1) + (n-k2) >= 2 * b))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}