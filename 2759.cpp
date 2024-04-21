#include <iostream>
using namespace std;

int main() {
    // Declare variables for A, B, and C
    char A, B, C;

    // Read character values for A, B, and C
    cin >> A >> B >> C;

    // Print the first pattern
    cout << "A = " << A << ", B = " << B << ", C = " << C << endl;

    // Print the second pattern
    cout << "A = " << B << ", B = " << C << ", C = " << A << endl;

    // Print the third pattern
    cout << "A = " << C << ", B = " << A << ", C = " << B << endl;

    return 0;
}
