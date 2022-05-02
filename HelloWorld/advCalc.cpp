#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int product(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

int quotient(int a, int b) {
    return a % b;
}

int main() {
    cout << " <<==== Welcome to C++ calculator ====>>" << endl;

    int first_number, second_number;
    cout << "Enter value of first number: \n";
    cin >> first_number;

    cout << "Enter value of second number: \n";
    cin >> second_number;

    bool terminate = false;

    while (!terminate) {
        cout << "Enter the type of operation you want to perform: \n";
        cout << "1. Add(+)\n2. Subtract(-)\n3. Product(*)\n4. Divide(/)\n5. Quotient(%)\n6. Exit (X/x)\n";
        // Enter the operation code
        char ch;
        cin >> ch;

        cout << "You want to perform " << ch << ".\n";

        if (ch == 'X' || ch == 'x') {
            cout << "NO ERROR: EXIT" << endl;
            break;
        }

        if (ch == '+') {
            cout << "Result: " << add(first_number, second_number) << "\n";
            first_number = add(first_number, second_number);
        } else if (ch == '-') {
            cout << "Result: " << sub(first_number, second_number) << "\n";
            first_number = sub(first_number, second_number);
        } else if (ch == '*') {
            cout << "Result: " << product(first_number, second_number) << "\n";
            first_number = product(first_number, second_number);
        } else if (ch == '/') {
            cout << "Result: " << divide(first_number, second_number) << "\n";
            first_number = divide(first_number, second_number);
        } else if (ch == '%') {
            cout << "Result: " << quotient(first_number, second_number) << "\n";
            first_number = quotient(first_number, second_number);
        } else {
            cout << "Not a valid Input: " << ch << "\n";
        }

        int newNum;
        cout << "Enter new number: \n";
        cin >> newNum;
        second_number = newNum;
    }

    return 0;
}