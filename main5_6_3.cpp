#include <iostream>
using namespace std;

int main() {
    int start_day, day;
    cout << "Введите номер дня недели начала мая (1-7): ";
    cin >> start_day;
    if (start_day < 1 || start_day > 7) {
        cout << "Некорректный день недели!" << endl;
        return 0;
    }
    cout << "Введите день мая: ";
    cin >> day;
    if (day < 1 || day > 31) {
        cout << "Некорректный день!" << endl;
        return 0;
    }

    bool isHoliday = (day >= 1 && day <= 5) || (day >= 8 && day <= 10);
    if (!isHoliday) {
        int weekDay = ((start_day - 1) + (day - 1)) % 7 + 1;
        isHoliday = (weekDay == 6 || weekDay == 7);
    }

    cout << (isHoliday ? "выходной" : "рабочий") << endl;
    return 0;
}
