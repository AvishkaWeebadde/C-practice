#include<iostream>
using namespace std;

void c(int p, int q, int d)
{
    cout << "Calling function c(" << p <<
}

void call_c(int p, int q, int d)
{
    for (int i = 0; i <= p; ++i)
    {
        for (int j = 0; j <= q; ++j)
        {
            c(i, j, d);
        }
    }
}

int main()
{

    call_c(4, 4, 1);

    return 0;
}