#include<iostream>

template<typename T>
T factorial(T n)
{
    T fact {n};
    if(n < 1)
    {
        return 1;
    }
    
    while(n > 1)
    {
        fact *= --n;
    }

    return fact;
}

int main()
{
    int n;
    std::cin >> n;

    std::cout << factorial<int>(n) << std::endl;
    return 0;
}