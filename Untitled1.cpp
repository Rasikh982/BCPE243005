#include <iostream>
using namespace std;

int main() {
    int dailySteps = 0;
    int goal = 0;
    char choice;

    // Get the daily step goal from the user
    cout << "Enter your daily step goal: ";
    cin >> goal;

    // Loop to track steps daily
    do {
        cout << "Enter the number of steps you walked today: ";
        cin >> dailySteps;

        // Check progress towards the goal
        if (dailySteps >= goal) {
            cout << "Congratulations! You reached your goal of " << goal << " steps today!" << endl;
        } else {
            cout << "You walked " << dailySteps << " steps today. You need " 
                 << (goal - dailySteps) << " more steps to reach your goal." << endl;
        }

        // Ask if the user wants to track another day
        cout << "Do you want to track another day? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Thank you for using the Step Tracker. Stay active!" << endl;
    return 0;
}
