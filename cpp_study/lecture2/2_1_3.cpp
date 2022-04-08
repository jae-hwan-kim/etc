#include <iostream>

int& function(int& a) {
    int a = 2;
    return a;
}

int main() {
    int b = 3;
    int c = function(b);
    std::cout << c << std::endl;
    return 0;
}