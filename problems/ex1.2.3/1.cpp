#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while(n--)
    {
        double d;
        cin >> d;

        cout << setw(7) << fixed << setprecision(3) << d << endl;
    }
}