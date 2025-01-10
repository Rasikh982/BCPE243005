#include <iostream>
#include <string>
using namespace std;

int main() {
    string month;
    cout << "Enter the month: ";
    cin >> month;

    for (auto &c : month) c = tolower(c); // Convert month to lowercase

    if (month == "december" || month == "january" || month == "february")
        cout << "Season: Winter" << endl;
    else if (month == "march" || month == "april" || month == "may")
        cout << "Season: Spring" << endl;
    else if (month == "june" || month == "july" || month == "august")
        cout << "Season: Summer" << endl;
    else if (month == "september" || month == "october" || month == "november")
        cout << "Season: Autumn" << endl;
    else
        cout << "Invalid month!" << endl;

    return 0;
}








