#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, h;
        cin >> n >> h;
        vector<int> vec(n);

        for(int i = 0; i < n; ++i) cin >> vec[i];

        sort(vec.begin(), vec.end());
        vector<int> w = {vec[n-2], vec[n-1]};

        int count  = 0, turn = 1;

        while(h > 0)
        {
            h -= w[turn];
            //cout << "h is " << h << endl;
            turn = (turn + 1) % 2;
            //cout << "turn is " << turn << endl;
            count++;
        }

        cout << count << "\n";
    }
    return 0;
}