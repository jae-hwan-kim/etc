#include <iostream>

int main(void) {
    // 좋지 않은 변수 선언의 예
    int a = 4;
    {
        std::cout << a << std::endl;
        int a = 1;
        std::cout << a << std::endl;       
    }
    std::cout << a << std::endl;
}