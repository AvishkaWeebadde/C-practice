#include<iostream>
using namespace std;

int square(int x)
{
    return x * x;
}

double square(double y)
{
    return y * y;
}

void nothing1(int a, float b, char c, int& d)
{ }

int nothing2(char a, float b, char c, int& d)
{
    return 0;
}

int main()
{ }