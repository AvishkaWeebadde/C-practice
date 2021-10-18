#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int mat[5][5];
    int a, b;
    for(int i = 0; i < 5; ++i)
    {
        for(int j = 0; j < 5; ++j)
        {
            int x;
            cin >> x;
            if(x == 1) 
            {
                a = i+1;
                b = j+1;
            }
        }
    }

    cout << abs(3 - a) + abs(3 - b) << endl;
    return 0;
}