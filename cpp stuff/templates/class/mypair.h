#include<iostream>
#include<cstdlib>
using namespace std;

template<class T>
class mypair
{
    T a, b;
    public:
    mypair(T first, T second)
    {
        a = first;
        b = second;
    }

    T getMax();

};

template<class T>
T mypair<T> :: getMax()
{
    T retval = (a > b) ? a : b;
    return retval;
}