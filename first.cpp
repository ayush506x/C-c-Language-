#include <iostream>
using namespace std;

int moveCount = 0;

void hanoi(int n, char source, char target, char spare) {
    if (n == 0) return;
    hanoi(n - 1, source, spare, target);
    cout << "Move disk " << n << " from " << source << " to " << target << endl;
    moveCount++;
    hanoi(n - 1, spare, target, source);
}

int main() {
    int n;
    cout << "Enter number of disks: ";
    cin >> n;
    hanoi(n, 'A', 'C', 'B');
    cout << "\nTotal moves: " << moveCount << endl;
    return 0;
}