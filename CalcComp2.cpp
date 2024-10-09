// Continuation of last project

#include <iostream>
using namespace std;

int main()
{
	//setting up variables
	int num1, num2, total;
	char oper;
	total = 0;

	//getting input
	cout << "Please enter the first number: ";
	cin >> num1;
	cout << "Please enter the second number: ";
	cin >> num2;
	cout << "Please enter the operator (+, -, *, /): ";
	cin >> oper;

	//conditional
	if (oper == '+')
		total = num1 + num2;
	else if (oper == '-')
		total = num1 - num2;
	else if (oper == '*')
		total = num1 * num2;
	else if (oper == '/')
		total = num1 / num2;
	else
		cout << "The given operator doesn't exist." << endl;

	//display results
	cout << "First number: " << num1 << endl;
	cout << "Second number: " << num2 << endl;
	cout << "Operator: " << oper << endl;
	cout << "Result: " << total;

	return 0;
}