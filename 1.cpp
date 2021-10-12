#include<iostream>

#include<string>
using namespace std;
int main()
{
    int i = 1;
    cout << i++ << endl;
    cout << (++i)++ << endl;
    i = ++i * ++i;
    cout << i++ * ++i << endl;
    return 0;
}