#include<iostream>
using namespace std;

int binSearch(int arr[], int l, int r, int key)
{
    while(l <= r)
    {
        int mid = r + (l - 1) / 2;

        if(arr[mid] > key)
        {
            r = mid - 1;
        }
        else if(arr[mid] < key)
        {
            l = mid + 1;
        }
        else 
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    int n, q, x;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int size = sizeof(arr) / sizeof(arr[0]);
    cin >> q;

    for(int i = 0; i < q; i++)
    {
        cin >> x;
        cout << binSearch(arr, 0, n - 1, x) + 1 << endl;
    }

    return 0;
}