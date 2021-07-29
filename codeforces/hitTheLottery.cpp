#include<iostream>
using namespace std;
typedef unsigned long long int ull;

int main()
{
    ull amount, leftOver, bills = 0LLU;

    cin >> amount;
    
    leftOver = (amount % 100LLU);
    bills += amount / 100LLU;
    amount = leftOver;

    leftOver = (amount % 20LLU);
    bills += amount / 20LLU;
    amount = leftOver;

    leftOver = (amount % 10LLU);
    bills += amount / 10LLU;
    amount = leftOver;

    leftOver = (amount % 5LLU);
    bills += amount / 5LLU;
    amount = leftOver;

    leftOver = (amount % 1LLU);
    bills += amount / 1LLU;
    amount = leftOver;

    cout << bills;
     
    return 0;
}