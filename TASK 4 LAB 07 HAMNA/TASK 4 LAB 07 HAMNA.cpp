#include <iostream>
using namespace std;
int main() {
    int array[10];
    cout << "ENTER 10 NUMBERS" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "NUMBER " << i + 1 << ": ";
        cin >> array[i];
    }
    cout << "THE NUMBERS IN REVERSE ORDER ARE:" << endl;
    for (int i = 9; i >= 0; --i) {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}