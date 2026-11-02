/*create a class A hving DM as x=48
create a class B having same DM x but value =20
class c is inheriting both classes and print the value of x using the obj C */
#include <iostream>
using namespace std;

// Base class A
class A
{
public:
    int x = 48;   // Data member of class A
};

// Base class B
class B
{
public:
    int x = 20;  
};

// Class C inherits from both A and B
class C : public A, public B
{
public:
    void display()
    {
        // Accessing x from class A
        cout << "Value of x from class A = " << A::x << endl;

        // Accessing x from class B
        cout << "Value of x from class B = " << B::x << endl;
    }

};

int main()
{
    C obj;   // Object of class C

    obj.display();

    return 0;
}   a   