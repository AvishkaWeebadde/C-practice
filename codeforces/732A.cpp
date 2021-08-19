#include<iostream>
using namespace std;

int main()
{
    int k, r, m;
    cin >> k >> r;
    for(int i = 9; i > 0; --i)
    {
        if((k*i) % 10 == 0 || (k*i) % 10 == r)
        {
            m = i;
        }
    }
    cout << m << "\n";
    return 0;
}