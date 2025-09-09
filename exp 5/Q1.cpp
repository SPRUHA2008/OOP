
Q1.3]
#include <iostream>
using namespace std;

class Sum {
    int n, total;

public:
    Sum() {
        cout << "Enter value of n: ";
        cin >> n;
        total = 0;
        for (int i = 1; i <= n; i++) {
            total += i;
        }
    }

    Sum( Sum &obj) {
        n = obj.n;
        total = obj.total;
    }

    void display() {
        cout << "Sum of numbers from 1 to " << n << " is: " << total << endl;
    }
};

int main() {
    Sum original;      
    Sum copy = original; 

    cout << "\nOriginal Object:\n";
    original.display();

    cout << "\nCopied Object:\n";
    copy.display();

    return 0;
}
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

