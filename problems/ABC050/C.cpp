#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);

    for(int i = 0; i < n; ++i)
    {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());

    if(n % 2 == 0)
    {
        if(vec[0] == vec[1])
        {
            cout << (n / 2) * (n / 2) << "\n";
        }
        else
        {
            cout << 0 << "\n";
        }
    }
    else
    {
        if(vec[0] != vec[1])
        {
            cout << (n / 2) * (n / 2) << "\n";
        }
        else
        {
            cout << 0 << "\n";
        }
    }

    return 0;
}
