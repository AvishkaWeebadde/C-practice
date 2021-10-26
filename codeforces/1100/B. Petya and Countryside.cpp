#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> b(n);

    for(int i = 0; i < n; ++i) cin >> b[i];

    int max = 0, k;
    for(int i = 0; i < n; i++)
    {
        int count = 1;

        k = i;

        for(int j = i - 1; j >= 0; --j)
        {
            if(b[j] <= b[k]) count++;
            else             break;
            k--;
        }

        k = i;

        for(int j = i + 1; j < n; ++j)
        {
            if(b[j] <= b[k]) count++;
            else             break;
            k++;
        }

        if(count > max) max = count;
    }

    cout << max << endl;

    return 0;
}