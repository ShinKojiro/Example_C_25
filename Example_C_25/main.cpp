#include <iostream>

using namespace std;

int main()
{

	//Pointers - store the address of a variable
	// (*) ==> derefrence operator
	//*p1 ==> returns value of the variable the pointer is pointing to
	// p1 ==> retruns address of where variable is stored
	//&p1 ==> returns address of pointer

	/*int num1 = 8,
		* p1 = &num1;

	cout << "Value: " << *p1 << endl;
	cout << "Address of Variable: " << &num1 << endl;
	cout << "Address of Variable: " << p1 << endl;
	cout << "Address of: " << &p1 << endl;*/

	int num1 = 15,
		num2 = 45;

	int* p1 = &num1,
		* p2 = &num2;

	cout << "Pointer 1: " << *p1 << endl;
	cout << "Pointer 2: " << *p2 << endl;

	//*p1 = *p2;

	/*cout << "Pointer 1: " << *p1 << endl;
	cout << "Pointer 2: " << *p2 << endl;

	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;*/

	p1 = p2;

	cout << "Pointer 1: " << *p1 << endl;
	cout << "Pointer 2: " << *p2 << endl;

	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;


	return 0;
}