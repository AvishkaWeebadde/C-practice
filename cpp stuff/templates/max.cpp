#include<iostream>
#include<cstdlib>
using namespace std;


template <class T>
T getmax(T a, T b)
{
    T result = (a > b) ? a : b;
    return result;
}
int main()
{

    cout << "max of 13 and 14 is " << getmax<int>(13, 14) << endl;

    return 0;
}
