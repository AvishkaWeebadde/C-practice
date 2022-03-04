#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
const ll NMAX = 100001;
ll arr[NMAX];

ll sumOfFactorial(ll n)
{
    ll sum = 0, r;

    while(n != 0)
    {
        r = n % 10;
        sum += r;
        n = n / 10;
    }


    return 1LL * sum;
}

void factorial(ll n)
{
    arr[0] = 1;
    arr[1] = 1;

    for(ll i = 2; i <= n; ++i)
    {
        arr[i] = 1LL * i * arr[i - 1];
        if(arr[i] % 10 == 0)
                arr[i] = arr[i] / 10;
        cout << i << "th factorial = " << arr[i] << endl;
    }
    
    //sumOfFactorial(arr[n]);

    //cout << arr[n] << endl;

    cout << sumOfFactorial(arr[n]) << endl;
}



int main()
{
    factorial(10);
    //(factorial(10)) - working;
    return 0;
}