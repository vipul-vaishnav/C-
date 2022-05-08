#include <iostream>
using namespace std;

int main(int argc, char **argv) {
    unsigned int x = 1;
    unsigned int x2 = 5;
    cout << (x & x2) << endl;

    int y = 3;
    int y2 = 6;
    cout << (y & y2) << endl;
    return 0;
}