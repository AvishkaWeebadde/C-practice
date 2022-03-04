#include <iostream>
#include<vector>
#include<set>
using namespace std;

const int NMAX = 100001;
bool isPrime[NMAX];
vector<int> primeN;


void findprime(int n)
{
    for(int i = 2; i <= n; i++)
    {
        isPrime[i] = true;
    }


    for(int i = 0; i <= n / 2; i++)
    {
        if(isPrime[i] == true)
        {
            for(int j = i * 2; j <= n; j += i)
            {
                isPrime[j] = false;
                
            }
        }
    }
}

int main()
{

    findprime(NMAX);

    for(int i = 2; i <= NMAX; i++)
    {
        if(isPrime[i] == true)
        {
            primeN.push_back(i);
        }
    }
    // since the indexing starts from 0, to find the 6th prime number which is 13, the array would have it in the position 5.
    // primeN[5] = 13
    cout << primeN[1000] << endl;
    return 0;
}