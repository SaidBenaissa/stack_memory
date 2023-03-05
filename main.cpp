#include <iostream>

void f1() { // 20 bytes
    short b[4]; // 8 bytes -> (4 * 2) short is 2 bytes
    int a;      // 4 bytes -> (32 bits) int is 4 bytes
    double c;   // 8 bytes -> double is 8 bytes
  // f2();
  // f3();
}

int main() {
    std::cout << " Calling f1() " << std::endl;
    f1();

    return 0;
}
