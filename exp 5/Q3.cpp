#include <iostream>
#include <string>
using namespace std;

class College {
    int roll_no;
    string name;
    string course;

public:
    College(int r, string n, string c = "Computer Engineering") {
        roll_no = r;
        name = n;
        course = c;
    }

    void display() {
        cout << "Roll No: " << roll_no << endl;
        cout << "Name: " << name << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    int roll;
    string name, course;

    cout << "Enter Roll No for Student 1: ";
    cin >> roll;
    cin.ignore();  
    cout << "Enter Name for Student 1: ";
    getline(cin, name);
    College student1(roll, name);

    cout << "Enter Roll No for Student 2: ";
    cin >> roll;
    cin.ignore();
    cout << "Enter Name for Student 2: ";
    getline(cin, name);
    cout << "Enter Course for Student 2: ";
    getline(cin, course);
    College student2(roll, name, course);

    cout << "\nStudent Details:\n";
    student1.display();
    student2.display();

    return 0;
}
