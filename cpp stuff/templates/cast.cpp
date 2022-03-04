#include<iostream>
#include<cstdlib>
using namespace std;

template <class rettype, class argtype>
rettype cast(argtype x)
{
    return (rettype) x;
}

template <typename T>
void print_data(T data)
{
    cout << data << endl;
}

int main()
{

    cout << cast<long>(10.133333333333333333333333) << endl;

    double x = 19.3;

    print_data(cast<long>(15.97));

    return 0;
}