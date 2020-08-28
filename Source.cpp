#include <iostream>
#include <Windows.h>
using namespace std;
int main() {
	cout << "Please enter the first number: ";
	double n1 = 0;
	cin >> n1;
	cout << "Please enter an operator (+, -, *, /): ";
	char op = '0';
	cin >> op;
	cout << "Please enter a second number: ";
	double n2 = 0;
	cin >> n2;
	double answer = 0;
	switch (op) {
	case '+': 
		answer = n1 + n2;
		break;
	case '-':
		answer = n1 - n2;
		break;
	case '*': 
		answer = n1 * n2;
		break;
	case '/': 
		answer = n1 / n2;
		break;
	}
	cout << "Thanks for using my calculator your answer is: " << answer;
