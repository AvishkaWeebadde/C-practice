#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt = 0;

    for(int i = 0; i < n; ++i)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if(a+b+c > 1) cnt++;
    }

    cout << cnt << endl;
    return 0;
}