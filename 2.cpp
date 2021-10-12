#include<iostream>

#include<string>
using namespace std;


class Base
{
    public:

    void show()
    {
        cout << "A " << endl;
    }

    void shov(int i)
    {
        cout << "A all" << endl;
    }

};

class Derived : public Base
{

    void v()
    {
        cout << "B all"  << endl;
    }
};

int main()
{
    Derived d;
    d.shov(5);
    return 0;
}


  int a, b;
        cin >> a >> b;

        // gcd(a, b) == gcd(a - b, b) if a > b

        int g = abs(a - b);

        // from editorial
        // To achieve the required GCD, we need to make b a multiple of g=a−b using as few operations as possible. 
        //There are two ways to do so − decrease b to the largest multiple of g less than or equal to b or 
        //increase b to the smallest multiple of g greater than b. 
        //The number of operations required to do so are bmodg and g−bmodg respectively.
        int op = min(b % g, g - b % g);

        cout << g << " " << op << "\n";