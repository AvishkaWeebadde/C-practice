#include<iostream>
using namespace std;

int main()
{

    int num[] = {5, 2, 4, 6, 1, 3};
    int key, j;
    int size = sizeof(num)/ sizeof(num[0]);

    for (int i = 1; i < size; i++)
    {
        key = num[i]; // i = 1, key = 2
        j = i - 1; // j == 0

        while (j >= 0 && num[j] > key) // j(0) >= 0 , num[0](5) > 2 ////  // j(-1) X
        {
            num[j + 1] = num[j]; // num[0+1] = num[1] <= num[0](5) {5, 5, 4, 6, 1, 3}
            j = j - 1; // j = -1

        }
        num[j + 1] = key; // num[-1 + 1] = num[0] <= 2 , {2, 5, 4, 6, 1, 3}
    }

    for(int i = 0; i < size; i++)
    {
        cout << num[i] << " ";
    }

    return 0;
}