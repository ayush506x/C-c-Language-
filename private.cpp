#include <iostream>
using namespace std;

class B; 

class A {
private:
    int a = 10;
public:
    friend void add(A, B); 
};

class B {
private:
    int b = 30;
public:
    friend void add(A, B); 
};
void add(A objA, B objB) {
    cout << objA.a + objB.b << endl;
}
int main() {
    A objA;
    B objB;
    add(objA, objB); 
    return 0;
}
