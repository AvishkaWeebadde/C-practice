#include<iostream>
using namespace std;

int main()
{
    int n, k, x;
    int count = 0;
    cin >> n >> k;
    
    for(int i = 0; i < n; ++i)
    {
        cin >> x;
        //cout << x << "-> 5 - x = " << 5 - x << endl;
        if(5 - x >= k)       
            count++;
    }
    
    cout << count / 3 << "\n";
    return 0;
}