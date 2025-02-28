#include <iostream>

#include <string>

int main() {
    setlocale (LC_ALL, "rus");
    std::cout << "========== Задача 1. Калькулятор скидки. ==========" << std::endl;

    /*

    int t_1, t_2, t_3, total_t;
    std::cout << "Введите цену 1 товара: ";
    std::cin >> t_1;
    std::cout << "Введите цену 2 товара: ";
    std::cin >> t_2;
    std::cout << "Введите цену 3 товара: ";
    std::cin >> t_3;
    total_t = t_1 + t_2 + t_3;
    if (total_t >= 10000) {
        std::cout << "====================\nВаша покупка больше 10000р, итог со скидкой в 10%: " << total_t-((total_t /100)*10) << std::endl;
    }
    else {
        std::cout << "====================\nВаша покупка меньше 10000р, скидка не предоставляется" << std::endl;
    }

    */

    std::cout << "========== Задача 2. Автомобиль. ==========" << std::endl;

    /*
    int const time = 2;  //120 минут / 2 часа
    int speed, distans;
    std::cout << "Введите скоррость движения km/h: ";
    std::cin >> speed;
    distans = speed * time;
    if (distans >= 200) {
        std::cout << "Вы приехали\n";
    }
    else {
        std::cout << "вы не приехали ";

    }
    */

    std::cout << "========== Задача 3. Модуль числа. ==========" << std::endl;

    /*

    int num, module;
    std::cout << "Введите число :";
    std::cin >> num;
    module = -num;
    if (num < 0) {
        std::cout << "модуль вашего числа: " << module << std::endl;
    }
    else {
        std::cout << "модуль вашего числа: " << -module << std::endl;
    }
    */


    std::cout << "========== Задача 4. Барберы (необязательная). ==========" << std::endl;


    int men, worker;
    std::cout << "Сколько живет мужчин в городе: ";
    std::cin >> men;
    std::cout << "Сколько барберов уже работает: ";
    std::cin >> worker;
    if ((men / 30 / 8) <=  worker) {
        std::cout << "барберов хватает\n";

    }
    else {
        std::cout << "барберов не хватает\n";
    }




    return 0;
}
