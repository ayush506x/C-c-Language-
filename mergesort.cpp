#include <iostream>
using namespace std;

class C
{
public:
    C()
    {
        cout << "Constructor of C" << endl;
    }
};

class A : public C
{
public:
    A()
    {
        cout << "Constructor of A" << endl;
    }
};

class B : public C
{
public:
    B()
    {
        cout << "Constructor of B" << endl;
    }
};

int main()
{
    A obj1;
    B obj2;

    return 0;
}hjjhg