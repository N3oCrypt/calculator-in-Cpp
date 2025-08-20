#include <iostream>
using namespace std;

int main() {
    int n1;
    int n2;
    int op;

    cout << "Enter number 1: ";
    cin >> n1;
    cout << "Enter number 2: ";
    cin >> n2;
    cout << "Choose an operation:\n1. Addition\n2. Subtraction\n3. Division\n4. Multiplication\nYour choice: ";
    cin >> op;

    switch (op) {
        case 1: {
            int result = n1 + n2;
            cout << "Result: " << result;
            break;
        }
        case 2: {
            int result = n1 - n2;
            cout << "Result: " << result;
            break;
        }
        case 3: {
            if (n2 == 0) {
                cout << "Error: Division by zero.";
            } else {
                int result = n1 / n2;
                cout << "Result: " << result;
            }
            break;
        }
        case 4: {
            int result = n1 * n2;
            cout << "Result: " << result;
            break;
        }
        default:
            cout << "Invalid operation.";
    }

    return 0;
}
