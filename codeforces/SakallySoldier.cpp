#include <cstdio>
#include<iostream>
#include <ostream>
using namespace std;
 
int main()
{
     #ifdef _DEBUG
	    freopen("alimagde.in", "r", stdin);
    //	freopen("output.txt", "w", stdout);
    #endif

    int t, n;
    cin >> t;
    
    while(t--)
    {
        cin >> n;
        
        int i = 1, step = 2, count = 0;
        while(i <= n)
        {
            count++;
            i += step;
            step++;
        }
        
        cout << n - count << endl;
        flush(cout);
    }
    return 0;
}