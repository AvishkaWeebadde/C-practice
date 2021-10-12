#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int count = 0;

        while(n != 0)
        {
            count++;
            n /= 2;
        }

        cout << (1<<(count - 1)) - 1 << endl;
    }

    return 0;

}