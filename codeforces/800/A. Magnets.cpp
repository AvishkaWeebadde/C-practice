#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x, g = 0;
    cin >> x;
    n--;

    while(n--)
    {
        int y;
        cin >> y;

        if(y != x) g++;

        x = y;
    }

    cout << g + 1 << endl;
    return 0;
}