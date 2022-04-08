#include <iostream>

// void change_val(int *a)
// {
//     *a = 3;
// }

int main() {
    // int number = 5;

    // std::cout << number << std::endl;
    // change_val(&number);
    // std::cout << number << std::endl;
    int a = 3;
    int& another_a = a;

    another_a = 5;
    std::cout << "a : " << a << std::endl;
    std::cout << "another_a : " << another_a << std::endl;
    return 0;
}