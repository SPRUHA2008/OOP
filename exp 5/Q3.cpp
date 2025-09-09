#include <iostream>
#include <string>
using namespace std;

class College {
    int roll_no;
    string name;
    string course;

public:
    College() {
        course = "Computer Engineering"; 
        cout << "Enter roll number: ";
        cin >> roll_no;
        cin.ignore(); 
        cout << "Enter name: ";
        getline(cin, name);
    }

    void display() {
        cout << "\nRoll No: " << roll_no << endl;
        cout << "Name: " << name << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    cout << "Enter details for Student 1:\n";
    College student1;

    cout << "\nEnter details for Student 2:\n";
    College student2;

    cout << "\n--- Student Details ---";
    student1.display();
    student2.display();

    return 0;
}
