#include<iostream>
using namespace std;
int main() {
	char ch;
	cout << "enter a character"<<endl;
	cin >> ch;
	if (isupper(ch)) {
		cout << "upper case character";
	}
	else if (islower(ch)) {
		cout << "lower case character";
	}
	else if (isdigit(ch)) {
		cout << "digit";
	}
	else {
		cout << "special character";
	}











