#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите второе число: ";
    cin >> num2;

    cout << "-----Проверяем-----" << endl;
    if (num2 == 0) {
        cout << "Ошибка: деление на ноль!" << endl;
    } else if (num1 % num2 == 0) {
        cout << "Да, " << num1 << " делится на " << num2 << " без остатка!" << endl;
    } else {
        cout << "Нет, " << num1 << " не делится на " << num2 << " без остатка!" << endl;
    }

    return 0;
}
