#include<iostream>
using namespace std;

int main()
{
    int n, k, total{0};

    cin >> n >> k;

    for(int i = 1; i <= n; ++i)
    {
        total += 5 * i;
        if(total + k > 240)
        {
            total -= 5 * i;
            break;
        }
    }
   
   int count{0}, i{1};

   while(total > 0)
   {
       total -= 5 * i;
       count++;
       i++;
   }

   cout << count;

   return 0;
}