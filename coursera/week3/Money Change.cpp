#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n, cnt = 0;
    cin >>  n;

    while(n)
    {
        if(n >= 10)
        {
            n -= 10;
            cnt++;
        }

        else if(n >= 5)
        {
            n -= 5;
            cnt++;
        }

        else
        {
            n -= 1;
            cnt++;
        }

    }

    cout << cnt << endl;
    return 0;
}