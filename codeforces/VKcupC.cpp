// wrong

#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;

int main()
{
    int t, minArmor = 10000001;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        while(n--)
        {
            int k, a;
            cin >> k;
            vector<int> armor(k, 0);
            for(int i = 0; i < k; ++i)
            {
                cin >> armor[i];
            }

            sort(armor.begin(), armor.end());

            minArmor = min(armor[armor.size()-1] + 1, minArmor);
        }

        cout << minArmor << "ans\n";
    }

    return 0;
}