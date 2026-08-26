#include <iostream>
using namespace std;
int add(int a, int b) {
    cin >> a;
    cin >> b;
    cout << "Sum = " << a + b << endl;
    return a + b;
}
int sub(int a, int b) {
    cout << "Difference = " << a - b << endl;
    return a - b;
}
int main() {
    int resultAdd = add(0, 0);
    int resultSub = sub(8, 6);

    return 0;
}
