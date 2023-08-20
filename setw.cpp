#include <iostream>
#include <iomanip> // Include the header for manipulators
using namespace std;

int main() {
    int num = 123;
    double pi = 3.14159;

    cout << setw(10) << num << setw(10) << pi << endl;

    return 0;
}

