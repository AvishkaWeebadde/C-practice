#include<iostream>
#include<cstdio>
using namespace std;

int s[100];
int l; 

void push(int x)
{
    s[l++] = x;
}

int pop()
{
    int x = s[l--];
    return x;
}

bool isEmpty()
{
    return l == 0;
}

void print()
{
    for(int i = 0; i < l; ++i)
    {
        printf("%d ", s[i]);
    }
    printf("\n");
}

int main()
{
    printf("inserting 5 elements..\n");
    for(int i = 1; i <=5; ++i)
    {
        push(i);
    }

    print();

    pop();
    pop();

    printf("\nAfter two pops, the stack.. \n");
    print();

    printf("\nAfter pushing 4..\n");
    push(4);
    print();

    while(!isEmpty())
    {
        pop();
    }

    printf("\nstack is empty.");
    return 0;
}