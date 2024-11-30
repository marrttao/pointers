#include <iostream>
using namespace std;

int main() {
    int* a = new int;
    int* b = new int;
    cout << "Enter value for a: ";
    cin >> *a;
    cout << "Enter value for b: ";
    cin >> *b;
    cout << (*a > *b ? *a : *b) << endl;

    if (a != nullptr & b != nullptr) {
        delete a, b;
    }
    return 0;
}
