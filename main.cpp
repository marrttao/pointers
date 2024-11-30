#include <iostream>
using namespace std;

int main() {
	int* a = new int;
	int* b = new int;
	cin >> *a;
	cin >> *b;
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
	cout << *a << "\t" << *b << endl;
	delete a, b;
	return 0;
}