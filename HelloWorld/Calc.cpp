#include <iostream>
using namespace std;

int sum(int first_number, int second_number) {
    return (first_number + second_number);
}

int subtract(int first_number, int second_number) {
    return (first_number - second_number);
}

int product(int first_number, int second_number) {
    return (first_number * second_number);
}

int divide(int first_number, int second_number) {
    return (first_number / second_number);
}

int quotient(int first_number, int second_number) {
    return (first_number % second_number);
}

int main(int argc, char **argv) {
    int x, y;
    cout << "Enter value of x: \n";
    cin >> x;
    cout << "You have entered: " << x << "\n\n";
    cout << "Enter value of y: \n";
    cin >> y;
    cout << "You have entered: " << y << "\n\n";

    char op;
    cout << "Enter value of op: \n";
    cin >> op;
    cout << "You have entered: " << op << "\n\n";

    cout << "RESULT: ";

    if (op == '+') {
        cout << sum(x, y);
    } else if (op == '-') {
        cout << subtract(x, y);
    } else if (op == '*') {
        cout << product(x, y);
    } else if (op == '/') {
        cout << divide(x, y);
    } else if (op == '%') {
        cout << quotient(x, y);
    } else {
        cout << "ERROR: Unknown op " << op;
    }
    return 0;
}