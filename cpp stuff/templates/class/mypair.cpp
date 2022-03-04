#include<iostream>
#include<cstdlib>
#include"mypair.h"
using namespace std;

int main()
{
    mypair<int> myObj (13, 14);
    cout << "max is " << myObj.getMax() << endl; 

    return 0;
}