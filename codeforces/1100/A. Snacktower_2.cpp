#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int a[100007] = {0};

int main()
{
    int n,cnt = 0;
    cin >> n;
    int m = n;

    while(n--)
    {
        int p;
        cin >> p;

        a[p] = 1;

        while(a[m] == 1)
        {
            cout << m-- << " ";
        }

        cout << endl;

    }
    
    return 0;
}