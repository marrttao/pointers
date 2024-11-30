#include <iostream>
using namespace std;

int main() {
    int* a = new int;
    cin >> *a;
    cout << (*a == 0 ? "zero" :(*a < 0 ? "negative" : "positive")) << endl;
    if (a != nullptr)
    {
        delete a;
    }
    return 0;
}
