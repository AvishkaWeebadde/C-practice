#include<iostream>
#include<vector>
using namespace std;
const int NMAX = 1000001;
bool multiple[NMAX];

int main()
{
    int n, sum = 0;
    cin >> n;

    for(int i = 3; i < NMAX; ++i)
    {
        if(i % 3 == 0 || i % 5 == 0)
            multiple[i] = true;
    }

    for(int i = 0; i < n; ++i)
    {
        if(multiple[i]) sum += i;
    }

    cout << sum;
    return 0;
}