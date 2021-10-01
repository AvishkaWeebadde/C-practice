/*
// when overloading with both rvalue and lvalue references functions like void printInt(int i) won't work because compiler will
// fail to identify which function to call to
*/

#include<iostream>
using namespace std;

void printInt(int& i)
{
    cout << "lvalue reference : " << i << endl;
}

void printInt(int&& i)
{
    cout << "rvalue reference : " << i << endl;
}

int main()
{
    int a = 4;
    printInt(a); // lvalue reference
    printInt(6); // rvalue reference
    return 0;
}