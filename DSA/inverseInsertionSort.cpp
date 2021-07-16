#include <iostream>
using namespace std;

int main()
{
    int num[] = {5, 2, 6, 4, 3, 1};
    int size{sizeof(num)/sizeof(num[0])};
    int key, j;

    for (int i = 1; i < size; i++)
    {
        key = num[i];
        j = i - 1;

        while (j >= 0 && num[j] < key)
        {
            num[j + 1] = num[j];
            j = j - 1;

        }
        num[j + 1] = key;
    }



    for(int i = 0;i < size; i++)
    {
        cout << num[i] << " ";
    }
    return 0;
}