#include <iostream>
using namespace std;

int main() {
    int n = 4; // Number of rows in the pyramid

    for (int i = 0; i < n; i++) {
        // Print spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Print increasing numbers
        for (int j = 1; j <= i + 1; j++) {
            cout << j;
        }

        // Print decreasing numbers
        for (int j = i; j >= 1; j--) {
            cout << j;
        }

        // Move to the next line
        cout << endl;
    }
    
    return 0;
}
