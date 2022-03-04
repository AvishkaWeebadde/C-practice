#include<iostream>
#include<cstdlib>
using namespace std;

template <class A, int N>
class sequence
{
    A memblock [N];
    public:
    void setmember(int x, A value);;
    A getmember(int X);
};

template<class A, int N>
void sequence<A, N>:: setmember(int x, A value)
{
    memblock[x] = value;
}

template<class A, int N>
A sequence<A, N> :: getmember(int x)
{
    return memblock[x];
}