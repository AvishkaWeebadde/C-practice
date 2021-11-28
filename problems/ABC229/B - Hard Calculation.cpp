#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
typedef long long ll;

int main()
{
    ll a, b;
    cin >> a >> b;

    bool flag = false;

    //int l1 = a.length(), l2 = b.length();

    //int ll = a.length() > b.length() ? b.length() : a.length();

    while(a != 0 && b != 0)
    {
        int r1 = a % 10;
        int r2 = b % 10;

        if(r1 + r2 >= 10) 
        {
            flag = true;
            break;
        }

        a = a / 10;
        b = b / 10;
    }

    if(flag) cout << "Hard\n";
    else     cout << "Easy\n";

    return 0;
}