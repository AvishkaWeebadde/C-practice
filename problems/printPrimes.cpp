#include<iostream>
#include<math.h>
using namespace std;

void printPrime(int n)
{
    bool status = true;
    int num = 2;

    for(int i = 2; i <= n; )
    {
        for(int j = 2; j <= sqrt(num); j++)
        {
            if(num % j == 0)
            {
                status = false;
                break;
            }
        }

        if(status == true)
        {
            cout << num << endl;
            i++;
        }

        status = true;
        num++;
    }

}

int main()
{
    printPrime(2);
    return 0;
}