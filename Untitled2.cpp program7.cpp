#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout << "marks=";
	cin >> marks;
	if (marks > 90) {
		cout << "a" << endl;
	}
	else if(marks > 75) {
		cout << "b" << endl;
	}
	else if (marks > 50) {
		cout << "c" << endl;
	}
	else {
		cout << "fail" << endl;
	}



}






