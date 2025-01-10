#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    if (age >= 18) {
        if (age > 50)
            cout << "Eligible and Senior Voter." << endl;
        else
            cout << "Eligible to vote." << endl;
    } else {
        cout << "Not eligible to vote." << endl;
    }

    return 0;
}

