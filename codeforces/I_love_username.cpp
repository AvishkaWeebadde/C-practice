#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maximum = arr[0] , minimum = arr[0], count{0};

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > maximum)
        {
            maximum = arr[i];
            count++;
        }

        else if (arr[i] < minimum) 
        {
            minimum = arr[i];
            count++;
        }
            
    }

    cout << count;
    
    return 0;
}