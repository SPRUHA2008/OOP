Q2.3]
#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    float percentage;

public:
    
    Student(string n, float p) {
        name = n;
        percentage = p;
    }

    
    Student(const Student &obj) {
        name = obj.name;
        percentage = obj.percentage;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    string name;
    float percent;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter percentage: ";
    cin >> percent;

    Student s1(name, percent);  
    Student s2 = s1;            

    cout << "\nOriginal Student Data:\n";
    s1.display();

    cout << "\nCopied Student Data:\n";
    s2.display();

    return 0;
}
