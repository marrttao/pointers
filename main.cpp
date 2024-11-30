#include <iostream>
using namespace std;

int main() {
	int* a = new int;
	int* b = new int;

	cout << "first number to calculate: ";
	cin >> *a;
	cout << "second number to calculate: ";
	cin >> *b;

	int* choice = new int;
	cout << "1. add  2. subtract  3. multiply  4. divide.  ";
	cin >> *choice;

	switch (*choice) {
	case 1:
		cout << *a + *b;
		break;
	case 2:
		cout << *a - *b;
		break;
	case 3:
		cout << *a * *b;
		break;
	case 4:
		cout << *a / *b;
		if (*b == 0) {
			cout << "cannot divide by zero";
		}
		break;

	default:
		cout << "invalid choice";
		break;
	}
	if (a != nullptr & b != nullptr & choice != nullptr) {
		delete a , b, choice;
	}

	return 0;
}