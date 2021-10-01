#include <iostream>
#include<cmath>
using namespace std;

const int NMAX = 1000000000;
bool isPrime[NMAX];

void seiveOfEratosthenes(int n)  // sieve will cause more runtime and memory management is clumsy for a problem like this.
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

bool isPrimen(int n)
{
    if(n <= 1)
        return false;
    

    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }

    return true;

}

int main() {
	
	int t;
	cin >> t;
    while(t--)
    {
        int m, n;
        cin >> m >> n;
        for(int i = m; i <= n; i++)
        {
            if(isPrimen(i))
            {
                cout << i << endl;
            }
        }
        
        cout << endl;
    }
    
    
	return 0;
}