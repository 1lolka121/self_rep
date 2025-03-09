#include <iostream>
using namespace std;

struct Date {
    int year, month, day;
};

bool isLeap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool isLater(const Date &a, const Date &b) {
    if (a.year != b.year) return a.year > b.year;
    if (a.month != b.month) return a.month > b.month;
    return a.day > b.day;
}

Date getAdultDate(Date birth) {
    Date adult = birth;
    adult.year += 18;
    if (birth.month == 2 && birth.day == 29 && !isLeap(adult.year)) {
        adult.month = 2;
        adult.day = 28;
    }
    return adult;
}

int main() {
    Date today, birth;
    cin >> today.year >> today.month >> today.day;
    cin >> birth.year >> birth.month >> birth.day;

    Date adultDate = getAdultDate(birth);
    cout << (isLater(today, adultDate) ? "можно" : "нельзя") << endl;

    return 0;
}
