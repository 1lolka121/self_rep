#include <iostream>
#include <string>

int main() {
	setlocale(LC_ALL, "rus");
	std::cout << "========== выполение 3.3 ==========" << std::endl;
	std::cout << "========== задание 1 ==========\n" << std::endl;
	std::string race, name;
	std::cout << "введите расу: " << std::endl;
	std::cin >> race;
	std::cout << "введите имя персонажа: " << std::endl;
	std::cin >> name;
	std::cout << "Родился новый " << race << ", его зовут " << name << ". Добро пожаловать в этот суровый мир!" << std::endl;
	std::cout << "\n========== задание 2 ==========\n" << std::endl;

	std::string user_login, user_password;
	std::cout << "Введите логин : " << std::endl;
	std::cin >> user_login;
	std::cout << "Введите пароль : " << std::endl;
	std::cin >> user_password;
	std::cout << "----------" << std::endl;
	std::cout << user_login << ", вы успешно зашли!" << std::endl;

}
