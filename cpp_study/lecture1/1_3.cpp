#include <iostream>

int main(void) {
/*
 * 0 ~ 10 출력 
 * 
 */
    // int i;

    // for (i = 0; i < 10; i++) {
    //     std::cout << i << std::endl;
    // }
    // return 0;

/*
 * @brief 
 * 1 ~ 10 합
 */
    // int i;
    // int sum;

    // i = 0;
    // sum = 0;
    // for (i = 1; i <= 10; i++) {
    //     sum += i;
    // }

    // std::cout << "합은 : " << sum << std::endl;
    // return 0;

    /**
     * @brief 
     * 행운의 숫자 맞추기
     */
    int user_input = 0;
    int lucky_number = 7;

    std::cout << "이신전심 숫자 맞추기" << std::endl;
    while (1) {
        std::cout << "번호 입력 : ";
        std::cin >> user_input;
        if (lucky_number == user_input) {
            std::cout << "마음이 통했습니다^^" << std::endl;
            break;
        }
        else
        {
            std::cout << "땡! 다시 해보세요~!" << std::endl;
        }
    }
    return 0;
}