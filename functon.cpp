#include <iostream>
using namespace std;

void multiplyByTwo(int* ptr) {
    *ptr = (*ptr) * 2;
    cout << *ptr << endl;
}

int main() {
    int num;
    cin >> num;
    multiplyByTwo(&num);
    return 0;
}
