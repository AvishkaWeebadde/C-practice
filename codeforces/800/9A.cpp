#include<iostream>
#include<cmath>
using namespace std;

int main()
{

    int y, w, d;
    cin >> y >> w;

    int p = max(y, w);

    if(p == 1) cout << 1 << "/" << 1 << endl;
    if(p == 2) cout << 5 << "/" << 6 << endl;
    if(p == 3) cout << 2 << "/" << 3 << endl;
    if(p == 4) cout << 1 << "/" << 2 << endl;
    if(p == 5) cout << 1 << "/" << 3 << endl;
    if(p == 6) cout << 1 << "/" << 6 << endl;

    return 0;
}