#include <iostream>
using namespace std;

int main() {
    int salary1, salary2, salary3;
    cout << "Введите зарплату первого сотрудника: ";
    cin >> salary1;
    cout << "Введите зарплату второго сотрудника: ";
    cin >> salary2;
    cout << "Введите зарплату третьего сотрудника: ";
    cin >> salary3;

    int max_salary = max(salary1, max(salary2, salary3));
    int min_salary = min(salary1, min(salary2, salary3));
    int average_salary = (salary1 + salary2 + salary3) / 3;

    cout << "-----Считаем-----" << endl;
    cout << "Самая высокая зарплата в отделе: " << max_salary << " рублей" << endl;
    cout << "Разница между самой высокой и самой низкой зарплатой в отделе: " << max_salary - min_salary << " рублей" << endl;
    cout << "Средняя зарплата в отделе: " << average_salary << " рублей" << endl;

    return 0;
}
