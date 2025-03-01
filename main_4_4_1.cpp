#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите второе число: ";
    cin >> num2;

    cout << "-----Проверяем-----" << endl;
    if (num1 < num2) {
        cout << "Наименьшее число: " << num1 << endl;
    } else if (num2 < num1) {
        cout << "Наименьшее число: " << num2 << endl;
    } else {
        cout << "Числа равны!" << endl;
    }

    return 0;
}
