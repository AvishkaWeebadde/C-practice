#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, cnt = 1;
        cin >> n;

        vector<int> w(n);

        for(int i = 0; i < n; ++i) cin >> w[i];

        //int i1 = *max_element(w.begin(), w.end());

    
        if(w[0] == 1) 
        {
            cnt++;
              
        }
        for(int i = 1; i < n; ++i)
        {
            if(w[i] == 1 && w[i - 1] == 0) 
            {
                cnt++;
                  
            }
            if(w[i] == 0 && w[i - 1] == 1) 
            {
                cnt += 0;
                   
            }
            if(w[i] == 1 && w[i - 1] == 1) 
            {
                cnt += 5;

            }
            if(w[i] == 0 && w[i - 1] == 0)
            {
                cnt = -1;
                break;
            }

            
        }

        cout << cnt << endl;
    }

    return 0;
}