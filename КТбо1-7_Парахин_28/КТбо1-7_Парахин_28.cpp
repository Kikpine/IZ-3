/*
МОП ЭВМ ИКТИБ ЮФУ
Программирование и основы теории алгоритмов 2
Парахин А.О. КТбо1-7
Индивидуальное задание №3 Вариант 28
13.05.2023
*/

#include <iostream>
using namespace std;

int createPrintFunctionValue(int x, int y);

int main()
{
    setlocale(LC_ALL, "Russian");

    int flag = 1;
    do {

        createPrintFunctionValue(3,2);

        cout << endl << "Хотите ввести входные данные заново или выйти из программы? (1 - Ввести входные данные заново, 0 - Выйти из программы) : ";
        cin >> flag;
        cout << "--------------------------------------------------------------------------------------------------------------------------" << endl;
        if (flag != 1 && flag != 0) {
            cout << "Введена неизвестная операция. Доступные операции: 1 или 0." << endl;
            break;
        }
    } while (flag != 0);

    cout << "Вы вышли из программы." << endl;
    return 0;
}

int createPrintFunctionValue(int x, int y) {
    int answer;
    if (x == 0) {
        answer = 0;
    }
    else {
        answer = (x - 1)*(x - 1) + createPrintFunctionValue(x-1, y) + y;
    }
    cout << answer << endl;
    return answer;
}