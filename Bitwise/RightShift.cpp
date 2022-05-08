#include <iostream>
using namespace std;

int main(int argc, char **argv) {
    unsigned int x = 33;
    unsigned int x2 = 2;
    cout << (x >> x2) << endl;

    int y = 33;
    int y2 = 4;
    cout << (y >> y2) << endl;
    return 0;
}