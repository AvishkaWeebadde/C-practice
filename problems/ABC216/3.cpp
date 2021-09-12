#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s = "";

    while(n > 0)
    {
        if(n % 2 == 0)
        {
            s += 'B';
            n /= 2;
        }

        else
        {
            s += 'A';
            n -= 1;
        }
    }

    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}