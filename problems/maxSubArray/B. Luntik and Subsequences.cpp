#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int arr[n];
        int tot = 0;

        for(int i = 0; i < n; ++i)
        {
            cin >> arr[i];
            tot += arr[i];
        }
        
        tot = tot - 1;
        

        int cnt = 0, sum = 0;

        int best = 0;
        for(int a = 0; a < n; ++a)
        {
            int sum = 0;

            for(int b = a; b < n; ++b)
            {
                sum += arr[b];
                if(sum == tot) cnt++;
            }
        }

        cout << cnt << " ans\n";
    }


    return 0;
}