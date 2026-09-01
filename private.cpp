#include <iostream>
using namespace std;
class A
{
    private:
    int a;
    public:
    freind void add();
};
class B
{
    private:
    int b;
    public:
    freind void add();
};
void add()
{
    cout << A.a+B.b;
};
int main()
{
    return 0;
}S
