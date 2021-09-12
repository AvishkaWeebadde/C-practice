#include<iostream>
#include "maximum.h"
using namespace std;

int main()
{
    cout << "Input three integers :";
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    cout << "Max is : " << maximum(n1, n2, n3) << endl;

    cout << "Input three charcters : ";
    char a, b, c;
    cin >> a >> b >> c;

    cout << "Max char value belongs to : " << maximum(a, b, c) << endl;

    return 0;
}