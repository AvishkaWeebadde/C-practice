#include "sequence.h"
#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    sequence<int, 10> myint;
    myint.setmember(0, 100);
    cout << myint.getmember(0) << endl;

    for(int i = 0; i < 10; ++i)
    {
        //cout << (i + 1) * 10 << " ";
        myint.setmember(i, (i + 1) * 10);
    }

    cout << endl;

    for(int i = 0; i < 10; ++i)
    {
        cout << myint.getmember(i) << " ";
    }

    cout << endl;
    return 0;
}