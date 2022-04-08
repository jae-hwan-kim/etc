#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void) {
    int user_input;

    cout << "저의 정보를 표시합니다" << endl;
    cout << "1. Name " << endl;
    cout << "2. Age" << endl;
    cout << "3. Sex" << endl;
    cin >> user_input;

    switch (user_input) {
        case 1:
            cout << "Jaekim ~!" << endl;
            break;

        case 2:
            cout << "99 years" << endl;
            break;

        case 3:
            cout << "M" << endl;
            break;

        default:
            cout << "궁금한게 없군요~" << endl;
            break;
    }
    return 0;
}