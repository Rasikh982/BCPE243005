#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) {
        if (number % 2 == 0)
            cout << "Positive and Even." << endl;
        else
            cout << "Positive and Odd." << endl;
    } else {
        cout << "Not a positive number." << endl;
    }

    return 0;
}

