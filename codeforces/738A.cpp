#include<iostream>
using namespace std;

int main()
{
    int t, n, p, res = 1;

    cin >> t;
    while(t--)
    {
        cin >> n;
        int max = 0, min = 1000000;

        for(int i = 0; i < n; ++i)
        {
            cin >> p;
            if(max < p)
                max = p;
            if(min > p)
                min = p;
        }

        printf("%d\n", max & min);
    }
    return 0;
}