#include<iostream>
using namespace std;

class boVector
{
    int size;
    double* arr_; // array

  public:
    boVector(const boVector& rhs)  // copy constructor
    {
        size = rhs.size;
        arr_ = new double[size];
        for(int i = 0; i < size; ++i)
        {
            arr_[i] = rhs.arr_[i];
        }
    }

    boVector(boVector&& rhs)  // move constructor
    {
        size = rhs.size;
        arr_ = rhs.arr_;
        rhs.arr_ = nullptr;
    }

    ~boVector()
    {
        delete arr_;
    }

};

void foo(boVector v);

boVector createBoVector();

int main()
{
    boVector reusable = createBoVector();
    // similar functionality provided by calling functions 
    // void foo_by_value(boVector v);
    // void foo_by_ref(boVector& v);
    foo(reusable);

    foo(createBoVector());
}