#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int amount;
    cin >> amount;

    int coins[3] = {20, 8, 1};

    int minNumCoins[amount + 1];

    minNumCoins[0] = 0;

    for(int m = 1; m <= amount; ++m)
    {
        minNumCoins[m] = 1000000000;

        for(int i = 0; i < sizeof(coins) / sizeof(coins[0]); ++i)
        {
            if (m >= coins[i])
            {
                //cout << m << " " << i << " " << coins[i] << endl;
                int numCoins = minNumCoins[m - coins[i]] + 1;
                //cout << "num" << numCoins << " min " << minNumCoins[m - coins[i]] << endl; 
                if(numCoins < minNumCoins[m]) minNumCoins[m] = numCoins;
            } 
        }
    }

    //for(int i = 0; i <= amount; ++i) cout << i << " = " << minNumCoins[i] << endl; 
    cout << endl;


    cout << minNumCoins[amount] << endl;
    return 0;
}