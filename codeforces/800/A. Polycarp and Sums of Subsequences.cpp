#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        vector<ll> nums(7);
        
        for(int i = 0; i < /*((1<<3) - 1)*/ 7; ++i) 
        {
           cin >> nums[i];
        }

        cout << nums[6] - nums[5] << " " << nums[6] - nums[4] << " " << (nums[6] - nums[5] - nums[4]) * -1 << "\n";

        //cout << (2>>3) << endl;
    }

    return 0;
}