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
void printRecursionScheme();

int main()
{
    setlocale(LC_ALL, "Russian");

    int flag = 1;
    do {
        printRecursionScheme();

        int argx1, argx2;
        cout << "Введите входные данные х1 и х2 для вычисления: ";
        cin >> argx1 >> argx2;
        cout << endl;
        createPrintFunctionValue(argx1,argx2);

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
    int answer, previous;
    if (x == 0) {
        answer = 0;
        cout << "f(" << x << "," << y << ") = g(" << x << ") = " << answer << endl;
    }
    else {
        previous = createPrintFunctionValue(x - 1, y);
        answer = (x - 1) * (x - 1) + previous + y;
        cout << "f(" << x << "," << y << ") = h(" << x - 1 << ",f(" << x - 1 << "," << y << ")," << y << ") = h(" << x - 1 << "," << previous << "," << y << ") = " << answer << endl;
    }
    return answer;
}

void printRecursionScheme() {
    cout << "Схема рекурсии:" << endl
         <<"{ f(0,x) = g(x) = 0" << endl
         << "{ f(y+1,x) = h(y,f(y,x),x) = y*y + f(y,x) + x" << endl << endl;
}