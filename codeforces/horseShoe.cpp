#include <iostream>
using namespace std;
 
int main()
{
    int count{0};
    int n[4];
    
    for(int i = 0; i < 4; i++)
    {
        cin >> n[i];
    }
    
    for(int i = 0; i < 4; i++)
    {
        for(int j = i + 1; j < 4; j++)
        {
            if(n[i] == n[j])
            {
                n[j] = -1;
                count++;
            
                break;
            }
        }
    }
    
    cout << count;
    
    return 0;
}