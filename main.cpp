// main.cpp

#include <iostream>
#include <cstdint>

extern "C" int add(int a, int b);

int main() {
    int a = 10;
    int b = 20;
    int c = add(a, b);
    std::cout << "Result: " << c << std::endl;
    return 0;
}
