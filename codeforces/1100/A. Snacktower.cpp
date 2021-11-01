#include <bits/stdc++.h>
 using namespace std;
 const int N=100020;
 int a[N]={0};
 int main()
 {
    int n;
    scanf("%d",&n);
    int m=n;
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        a[p]=1;//// Mark the number of points, actually sort
        while(a[m]==1)
        {
            //cout << a[m] << "<- a[m] a[p]->" << a[p] << " " << m << "<-m p->" << p << endl;
            printf("%d ",m);
            m--;
        }
        printf("\n");
    }
    return 0;
 }