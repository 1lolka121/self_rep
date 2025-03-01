#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Введите день недели (от 1 до 7): ";
    cin >> day;

    cout << "Меню сегодня (";

    switch (day) {
        case 1:
            cout << "понедельник):" << endl;
            cout << "Борщ\nСалат «Греческий»\nКотлета по-киевски\nКомпот" << endl;
            break;
        case 2:
            cout << "вторник):" << endl;
            cout << "Харчо\nСалат «Оливье»\nБаварские колбаски с капустой\nМорс" << endl;
            break;
        case 3:
            cout << "среда):" << endl;
            cout << "Суп-пюре из тыквы\nСалат «Цезарь»\nРыба на гриле\nСок" << endl;
            break;
        case 4:
            cout << "четверг):" << endl;
            cout << "Гороховый суп\nСалат «Цезарь» с креветками\nКуриная ножка с пюре\nМорс" << endl;
            break;
        case 5:
            cout << "пятница):" << endl;
            cout << "Солянка\nСалат «Греческий»\nСтейк из говядины\nКомпот" << endl;
            break;
        case 6:
            cout << "суббота):" << endl;
            cout << "Уха\nСалат «Оливье»\nЖаркое из свинины\nСок" << endl;
            break;
        case 7:
            cout << "воскресенье):" << endl;
            cout << "Куриный суп\nСалат «Цезарь»\nПлов\nМорс" << endl;
            break;
        default:
            cout << "Ошибка: введите число от 1 до 7!" << endl;
            break;
    }

    return 0;
}
