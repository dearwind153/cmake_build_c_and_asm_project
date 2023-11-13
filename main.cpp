// main.cpp

#include <iostream>

extern "C" int add(int a, int b);
extern "C" int sub(int a, int b);

int main() {
    int a = 10;
    int b = 20;
    int c = add(a, b);
    int d = sub(a, b);
    std::cout << "add("<<a<<","<<b<< ")Result: " << c << std::endl;
    std::cout << "sub("<<a<<","<<b<< ")Result: " << d << std::endl;
    return 0;
}
