#include <iostream>

int main() {
    int arr[3][2] = {1, 2, 3, 4, 5, 6};
    int(&ref)[3][2] = arr;

    std::cout << ref[0][0] << ref[0][1] << ref[1][0] << std::endl;
    return 0;
}