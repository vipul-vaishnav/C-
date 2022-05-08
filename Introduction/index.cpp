#include <iostream>

int sum_of_n(int n) {
    int sum = 0;
    for (int i = 1; i < n + 1; i++)
    {
        sum += i;
    }
    return sum;
}

int main() {
    std::cout << "Enter the value of n: \n";
    int n;
    std::cin >> n;
    std::cout << "You have entered: " << n << std::endl;
    int sum = sum_of_n(n);
    std::cout << "SUM: " << sum << std::endl;
    return 0;
}