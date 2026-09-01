#include <iostream>
using namespace std;

class DM {
private:
    int marks; 
public:
    DM(int m) {
        marks = m;
    }
    void display() {
        cout << "Marks: " << marks << endl;
    }
};
int main() {
    DM a(85);   
    a.display(); 
    DM b(92);
    b.display();
    return 0;
}