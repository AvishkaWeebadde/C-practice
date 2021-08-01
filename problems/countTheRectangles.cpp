/*
input : n, dimension of the block containing the sqaures
Eg : if input is 3, then the block is a 3x3 matrix.

output : count of ixj blocks (1<= i <= n, 1 <= j <= n)

source : https://www.youtube.com/watch?v=Uq9OXC0Gzgw
*/

#include<iostream>
#include <cmath>
using namespace std;

int main()
{
    int d, count{0};
    cin >> d;

    for(int i = 1; i <= d; i++)
    {
        count += pow(i, 3);
    }

    cout << count;

    return 0;
}