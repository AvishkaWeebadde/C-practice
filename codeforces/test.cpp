#include<iostream>
using namespace std;

int main()
{
    int n = 2, t = 3;

    for(int i = 0; i <= (1<<t); ++i)
    {
        if((1<<i))
            cout << "Yes-" << i <<" " << (3&(1<<i)) << "\n";
        else
            cout << "No-" << i  <<" " << (3&(1<<i)) <<  "\n";
    }
    return 0;
}