#include<iostream>
using namespace std;

int main()
{

    int num[] = {5, 2, 4, 6, 1, 3};
    int key, j;
    int size = sizeof(num)/ sizeof(num[0]);

    for (int i = 1; i < size; i++)
    {
        key = num[i];
        j = i - 1;

        while (j >= 0 && num[j] > key)
        {
            num[j + 1] = num[j];
            j = j - 1;

        }
        num[j + 1] = key;
    }

    for(int i = 0; i < size; i++)
    {
        cout << num[i] << " ";
    }

    return 0;
}