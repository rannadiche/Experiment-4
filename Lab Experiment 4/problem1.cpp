#include <iostream>

using namespace std;

int add(int, int), subtract(int, int), multiply(int, int), divide(int, int), modulo(int, int);

int main()
{	
	int menu, a, b, sum, diff, prod;
	double rem, quo; 
	char ans;
	
	cout << "Menu: " << endl;
	cout << "\t1. Add" << endl;
	cout << "\t2. Subtract" << endl;
	cout << "\t3. Multiply" << endl;
	cout << "\t4. Divide" << endl;
	cout << "\t5. Modulus" << endl;
do{	
	cout << endl << "Enter your choice: ";
	cin >> menu;
	cout << "Enter your two numbers: ";
	cin >>  a >> b;
	
	if(menu==1)
	{
		sum = add(a, b);
		cout << "Sum = " << sum;
	}
	else if(menu==2)
	{
		diff = subtract(a, b);
		cout << "Difference = " << diff;
	}
	else if(menu==3)
	{
		prod = multiply(a, b);
		cout << "Product = " << prod;
	}
	else if(menu==4)
	{
		quo = divide(a, b);
		cout << "Quotient = " << quo;
	}
	else if(menu==5)
	{
		rem = modulo(a, b);
		cout << "Remainder = " << rem;
	}
	else
		cout << "Invalid input. Please choose from 1 - 5.";

	cout << endl << "Do you want to continue? (Y/N): ";
	cin >> ans;
}

while(ans == 'Y' || ans == 'y');

	return 0;
}

int add(int a, int b)
{
    int add;
    add = a + b;
    return add;
}

int subtract(int a, int b)
{
	int subtract;
	subtract = a - b;
	return subtract;
}

int multiply(int a, int b)
{
    int multiply;
    multiply = a * b;
    return multiply;
}

int divide(int a, int b)
{
    int divide;
    divide = a / b;
    return divide;
}

int modulo(int a, int b)
{
	int modulo;
	modulo = a % b;
	return modulo;
}
