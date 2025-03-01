#include <iostream>
using namespace std;

int main() {
    int num1, num2, sum;
    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите второе число: ";
    cin >> num2;
    cout << "Введите их сумму: ";
    cin >> sum;

    cout << "-----Проверяем-----" << endl;
    if (sum == num1 + num2) {
        cout << "Верно!" << endl;
    } else {
        cout << "Ошибка! Верный результат: " << num1 + num2 << endl;
    }

    return 0;
}
