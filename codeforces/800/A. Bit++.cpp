#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = 0;

    while(n--)
    {
        string s;
        cin >> s;
        

        size_t found = s.find("++");
        if (found != string::npos) x++;
        else                       x--;
    }

    cout << x << endl;
    return 0;
}