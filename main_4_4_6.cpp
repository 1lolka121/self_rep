#include <iostream>
using namespace std;

int main() {
    int people, barbers;
    cout << "Введите число людей: ";
    cin >> people;
    cout << "Введите число барберов: ";
    cin >> barbers;

    int hours_per_month = 8 * 30; // 8 часов в день, 30 дней в месяце
    int total_hours_available = barbers * hours_per_month;

    if (total_hours_available >= people) {
        cout << "Барберов хватает!" << endl;
    } else {
        cout << "Барберов не хватает!" << endl;
    }

    return 0;
}
