#include <iostream>
#include <random>
using namespace std;

int main() {
    int size;
    cin >> size;
    int* array = new int[size] {};
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 100);
    int* temp = new int[size] {};
    for (int i = 0; i < size; i++) {
        array[i] = dis(gen);
        temp[i] = array[i];
    }
    cout << "First array: " << endl;
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    int* second_array = new int[size] {};
    for (int i = 0; i < size; i++) {
        second_array[i] = temp[i];
    }
    cout << endl << "Second array where first is copied: " << endl;
    for (int i = 0; i < size; i++) {
        cout << second_array[i] << " ";
    }

    delete[] array;
    delete[] temp;
    delete[] second_array;

    return 0;
}
