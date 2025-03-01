#include <iostream>
using namespace std;

int main() {
    int experience;
    cout << "Введите число очков опыта: ";
    cin >> experience;

    cout << "-----Считаем-----" << endl;
    if (experience < 1000) {
        cout << "Ваш уровень: 1" << endl;
    } else if (experience < 2500) {
        cout << "Ваш уровень: 2" << endl;
    } else if (experience < 5000) {
        cout << "Ваш уровень: 3" << endl;
    } else {
        cout << "Ваш уровень: 4" << endl;
    }

    return 0;
}
