#include <iostream>
#include <vector>
#include <string>

int main() {
    setlocale (LC_ALL, "rus");
   /*
    
    std::cout << "========== Задача 1. Маршрутка ==========\n\n" << std::endl;
    // Названия остановок
    std::string stops_1  ="Улица программистов";
    std::string stops_2 = "Проспект алгоритмов";
    std::string stops_3 = "Площадь структур данных";
    std::string stops_4 = "Бульвар объектно-ориентированного программирования";
   
    // Стоимость билета
    const int ticketPrice = 20;

    // Переменные для подсчета пассажиров и доходов
    int passengers = 0;
    int totalIncome = 0;
   
   
    std::cout << "Прибываем на остановку \"" << stops_1 <<"В салоне пассажиров : " << passengers << std::endl;
    int passengersOut, passengersIn;
    std::cout << "Сколько пассажиров вышло на остановке? ";
    std::cin >> passengersOut;
    std::cout << "Сколько пассажиров зашло на остановке? ";
    std::cin >> passengersIn;

    // Обновляем количество пассажиров
    passengers -= passengersOut;
    passengers += passengersIn;

    // Обновляем общий доход
    totalIncome += passengersIn * ticketPrice;
    std::cout << "Отправляемся с остановки \"" << stops_1 << "\". В салоне пассажиров: " << passengers << std::endl;
    std::cout << "-----------Едем---------" << std::endl;
    
    std::cout << "Прибываем на остановку \"" << stops_2 << "В салоне пассажиров : " << passengers << std::endl;
 
    std::cout << "Сколько пассажиров вышло на остановке? ";
    std::cin >> passengersOut;
    std::cout << "Сколько пассажиров зашло на остановке? ";
    std::cin >> passengersIn;

    // Обновляем количество пассажиров
    passengers -= passengersOut;
    passengers += passengersIn;

    // Обновляем общий доход
    totalIncome += passengersIn * ticketPrice;
    std::cout << "Отправляемся с остановки \"" << stops_2 << "\". В салоне пассажиров: " << passengers << std::endl;
    std::cout << "-----------Едем---------" << std::endl;

    std::cout << "Прибываем на остановку \"" << stops_3 << "В салоне пассажиров : " << passengers << std::endl;
    
    std::cout << "Сколько пассажиров вышло на остановке? ";
    std::cin >> passengersOut;
    std::cout << "Сколько пассажиров зашло на остановке? ";
    std::cin >> passengersIn;

    // Обновляем количество пассажиров
    passengers -= passengersOut;
    passengers += passengersIn;

    // Обновляем общий доход
    totalIncome += passengersIn * ticketPrice;
    std::cout << "Отправляемся с остановки \"" << stops_3 << "\". В салоне пассажиров: " << passengers << std::endl;
    std::cout << "-----------Едем---------" << std::endl;

    std::cout << "Прибываем на остановку \"" << stops_4 << "В салоне пассажиров : " << passengers << std::endl;
  
    std::cout << "Сколько пассажиров вышло на остановке? ";
    std::cin >> passengersOut;
    std::cout << "Сколько пассажиров зашло на остановке? ";
    std::cin >> passengersIn;

    // Обновляем количество пассажиров
    passengers -= passengersOut;
    passengers += passengersIn;

    // Обновляем общий доход
    totalIncome += passengersIn * ticketPrice;
    std::cout << "Отправляемся с остановки \"" << stops_4 << "\". В салоне пассажиров: " << passengers << std::endl;
    std::cout << "-----------Едем---------" << std::endl;


    // Расчет расходов
    int salary = totalIncome / 4;
    int fuel = totalIncome / 5;
    int taxes = totalIncome / 5;
    int repair = totalIncome / 5;

    // Итоговый доход
    int netIncome = totalIncome - (salary + fuel + taxes + repair);

    // Вывод результатов
    std::cout << "Всего заработали: " << totalIncome << " руб." << std::endl;
    std::cout << "Зарплата водителя: " << salary << " руб." << std::endl;
    std::cout << "Расходы на топливо: " << fuel << " руб." << std::endl;
    std::cout << "Налоги: " << taxes << " руб." << std::endl;
    std::cout << "Расходы на ремонт машины: " << repair << " руб." << std::endl;
    std::cout << "Итого доход: " << netIncome << " руб." << std::endl;

    */

    std::cout << "========== Задача 2. Меняем местами ==========\n\n" << std::endl;
    /*
    
    int a = 42;
    int b = 153;
    int z;

    std::cout << "a: " << a << "\n"; // На экран будет выведено 42 
    std::cout << "b: " << b << "\n"; // На экран будет выведено 153

    // Меняем значения 

    z = a; 
    a = b;
    b = z;
    std::cout << "a: " << a << "\n"; // На экран будет выведено 153 
    std::cout << "b: " << b << "\n"; // На экран будет выведено 42 
    */

    std::cout << "========== Задача 3. Злостные вредители ==========\n\n" << std::endl;
   /*

    int startHeight = 0, growth = 50, losses = 20, day;
    std::cout << "Введите количество суток, чтобы узнать высоту бамбука" << std::endl;
    std::cin >> day;
    int n_day_height = startHeight + (growth - losses) * day + (growth / 2);
    std::cout << "Высота бамбука на "<<day<<" сутки: " << n_day_height << std::endl;
    */

    std::cout << "========== Задача 4 (дополнительная). Повышаем градус сложности* ==========\n\n" << std::endl;
    int a = 42;
    int b = 153;


    std::cout << "a: " << a << "\n"; // На экран будет выведено 42 
    std::cout << "b: " << b << "\n"; // На экран будет выведено 153

    // Меняем значения 

    a = a + b;  // a теперь содержит сумму a и b
    b = a - b;  // b теперь содержит исходное значение a
    a = a - b;  // a теперь содержит исходное значение b
   
    std::cout << "a: " << a << "\n"; // На экран будет выведено 153 
    std::cout << "b: " << b << "\n"; // На экран будет выведено 42 

}
