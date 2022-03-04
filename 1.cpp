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

    int8_t a =200;
    uint8_t b = 100;

    cout << (float) 1 /2 << endl;
    if(a > b) cout << "y" << endl;
    else cout << "n ";
}