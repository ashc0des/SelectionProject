// Program that mimics a calculator

#include <iostream>
using namespace std;

int main()
{
	//setting up variables
	char oper;
	int num1, num2, total;
	total = 0;

	//getting input
	cout << "Please input the first number: ";
	cin >> num1;
	cout << "Please input the second number: ";
	cin >> num2;
	cout << "Please enter the operator (+, -, *, or /): ";
	cin >> oper;

	//case switch
	switch (oper)
	{
		case '+':
			total = num1 + num2;
			break;
		case '-':
			total = num1 - num2;
			break;
		case '*':
			total = num1 * num2;
			break;
		case '/':
			total = num1 / num2;
			break;
		default:
			cout << "The given operator doesn't exist." << endl;
	}

	//display results
	cout << "First number: " << num1 << endl;
	cout << "Second number: " << num2 << endl;
	cout << "Operation: " << oper << endl;
	cout << "Result: " << total;

	return 0;
}