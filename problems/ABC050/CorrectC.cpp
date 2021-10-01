# include <cstdio>
# include <map>
# include <cmath>
 
using namespace std;
 
const int mod = 1e9+7;
 
int main()
{
    int n;
    int  a[100005];
    map<int,int> m;
    scanf("%d",&n);
 
    for(int i = 0;i < n;i++)
    {
        scanf("%d",&a[i]);
        m[a[i]]++;
    }
 
    int flag = 0; 
    if(n%2) //odd number 
    {
        if(m[0] != 1)
        {
            flag = 1;
        }
        for(int i = 2;i < n;i+=2)
        {
            if(m[i] != 2)
            {
                flag = 1;
            }
        }
    }else{
        for(int i = 1;i < n;i+=2)
        {
            if(m[i] != 2)
            {
                flag = 1;
            }
        }
    }
    long long sum = 1;
 
    for(int i =0;i < floor(n/2);i++)
    {
        sum = ((sum % mod) * 2)% mod;
    }
 
    if(n%2)
    {
        if(flag)
        printf("0\n");
        else
        printf("%lld\n",sum);
    }   
    else
    {
        if(flag)
        printf("0\n");
        else
        printf("%lld\n",sum);
    }
 
    return 0;
 }