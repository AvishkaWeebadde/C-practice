#include<iostream>
using namespace std;
int main()
{
    int a, b;
    char c;
    cin >> a >> c >> b;

    int res = (c == '+') ? a + b : a - b;
    cout << res << "\n";
}