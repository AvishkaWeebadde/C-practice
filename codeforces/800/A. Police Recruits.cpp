#include<iostream>
#include<vector>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int tot = 0, ans = 0;
    for(int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;

        if(x == -1)
        {
            if(!tot) ans++;
            else     tot--;
        }
        else tot += x;
    }

    cout << ans << endl;
    return 0;
}