#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for (int i = 0; i < n; i++) {
        // Print spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        // Print characters
        char ch = 'A' + (n - i - 1); // Character to print based on the row
        for (int j = 0; j < n - i; j++) {
            cout << ch;
        }

        cout << endl;
    }

    return 0;
}
