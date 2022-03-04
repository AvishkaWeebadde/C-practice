#include<iostream>
#include<cstdlib>
using namespace std;


template <class T>
T add(T a, T b)
{
    return a + b;
}

int main()
{

    int x = add(1, 2);
    auto y = add<double>(3.3, 4.5);

    cout << x << " " << y << endl;

    return 0;
}