
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

