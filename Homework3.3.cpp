#include <iostream>
#include <string>
#include <Windows.h>

static void horoscope (const std::string& gender, const std::string& sign, int age)
{
    const std::string water_sign[] = { "Рак", "Скорпион", "Рыбы" };
    const std::string earth_sign[] = { "Телец", "Дева", "Козерог" };

    if (gender == "мужчина") 
    {
        for (const auto& sign1 : water_sign)
        {
            if (sign == sign1 && age < 40) 
            {
                std::cout << "Сегодня очень плодотворный день. Можно добиться того, что прежде казалось почти невозможным." << std::endl;
                return;
            }
        }
    }

    if (gender == "женщина") 
    {
        for (const auto& sign1 : earth_sign)
        {
            if (sign == sign1 && age >= 15 && age <= 30) 
            {
                std::cout << "Сегодняшний вечер подходит для общения с друзьями, проведения домашних праздников и импровизированных вечеринок. Будет не только весело, но и интересно: найдётся дело, которое увлечёт всех." << std::endl;
                return;
            }
        }
    }

    std::cout << "Гороскоп для вас находится в разработке. Приходите чуточку позже ;)" << std::endl;
}

int main() 
{
    std::string gender;
    std::string sign;
    int age;

    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "rus");
    std:: wcout << L"Введите пол (мужчина/женщина):\n";
	std::cin >> gender;
	std::wcout << L"Введите знак зодиака (Рак, Скорпион, Рыбы, Телец, Дева, Козерог):\n";
	std::cin >> sign;
	std::wcout << L"Введите возраст:\n";
	std::cin >> age;

    horoscope(gender, sign, age);

    return 0;
}