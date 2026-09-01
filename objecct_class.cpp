#include <iostream>
#include <iomanip>
using namespace std;
class student {
public:
    string name; 
    int age;     
};
int main() {
    student s1,s2;
    cout << "Enter student name: ";
    getline(cin, s1.name);
    cout << "Enter student age: ";
    cin >> s1.age;
    cout << "\n--- Student Details ---\n";
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Enter student  2 name: ";
    getline(cin, s2.name);
    cout << "Enter student 2 age: ";
    cin >> s2.age;
    cout << "\n--- Student Details ---\n";
    cout << "Name: " << s2.name << endl;
    cout << "Age: " << s2.age << endl
    return 0;
}
