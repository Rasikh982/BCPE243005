	#include<iostream>
Using namespace std;
int main()
{
	int age;
	cout << "age=";
	cin >> age;
	if (age < 12) {
		cout << "child";
	}
	else if (age < 19) {
		cout << "teeneger";
	}
	else if (age < 30) {
		cout << "adult";
	}
	else {
		cout << "senior citizen";
	}

}





