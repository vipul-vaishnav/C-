#include <iostream>

int addNumbers(int first_number, int second_number) {
    int sum = first_number + second_number;
    return sum;
}

int main(int argc, char **argv) {
    int num1 = 7;
    int num2 = 11;

    int sum = addNumbers(num1, num2);

    std::cout << "The sum of num1: " << num1 << " and num2: " << num2 << " is: " << sum << "." << std::endl;
    return 0;
} 