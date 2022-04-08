#include <iostream>

// void    change_val(int &a) {
//     a = 3;
// }

int main() {
    // int number = 5;

    // std::cout << number << std::endl;
    // change_val(number);
    // std::cout << number << std::endl;
    // return 0;
    
    // int x;
    // int& y = x;
    // int& z = y;

    // x = 1;
    // std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;

    // x = 2;
    // std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;
    
    // x = 4;
    // std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;
    // return 0;

    int a = 4;
    int& ref = a;
    std::cout << ref << std::endl;
    return 0;
}