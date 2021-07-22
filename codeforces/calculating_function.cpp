#include<iostream>
using namespace std;

int main()
{
    int n, res;
    cin >> n;
    
    if(n % 2 == 0)
    {
        res = n/2;
        cout << res;
    }
        
    else 
    {
        res = (n - 1) / 2 - n;
        cout << res;
    }
        
    return 0;
}