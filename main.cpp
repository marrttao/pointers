#include <iostream>
using namespace std;

int main() {
    int* a = new int;
    cin >> *a;
    cout << (*a == 0 ? "zero" :(*a < 0 ? "negative" : "positive")) << endl;
    delete a;
    return 0;
}
