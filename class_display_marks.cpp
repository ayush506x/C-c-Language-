#include <iostream>
#include <string>
using namespace std;
struct DM {
    int age;
    string name;
};
void display(DM person) {
    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << endl;
}
int main() {
    DM student1;  
    student1.name = "Ayush";
    student1.age = 20;
    return 0;
}
