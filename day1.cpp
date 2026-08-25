#include <iostream>
using namespace std;

int main() {
    int age;        
    string name;
    cout << "Enter age: ";
    cin >> age;  
    cin.ignore();
    cout << "Enter full name: ";
    getline(cin, name); 
    cout << "Age: " << age << endl;
    cout << "Name: " << name << endl;
    return 0;
}
