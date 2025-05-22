#include <iostream>
#include <string>
#include <Windows.h>

    std::string number_to_words(int n) 
    {
        std::string units[] = { "", "один", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять",
                               "десять", "одиннадцать", "двенадцать", "тринадцать", "четырнадцать", "пятнадцать",
                               "шестнадцать", "семнадцать", "восемнадцать", "девятнадцать" };
        std::string tens[] = { "", "", "двадцать", "тридцать", "сорок", "пятьдесят", "шестьдесят",
                              "семьдесят", "восемьдесят", "девяносто" };

        if (n < 0) 
        {
            return "минус " + number_to_words(-n);
        }
        else if (n < 20) 
        {
            return units[n];
        }
        else if (n < 100) 
        {
            return tens[n / 10] + (n % 10 != 0 ? " " + units[n % 10] : "");
        }
        return "";
    }

    std::string compare_numbers(int num1, int num2) {
        if (num1 < num2) {
            return number_to_words(num1) + " меньше чем " + number_to_words(num2);
        }
        else if (num1 > num2) {
            return number_to_words(num1) + " больше чем " + number_to_words(num2);
        }
        else {
            return number_to_words(num1) + " равно " + number_to_words(num2);
        }
    }

    int main() 
    {
        int num1, num2;

        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
        setlocale(LC_ALL, "rus");
        std::cout << "Введите целое число: ";
        std::cin >> num1;
        std::cout << "Введите целое число: ";
        std::cin >> num2;

        if (abs(num1) >= 100 || abs(num2) >= 100) 
        {
            std::cout << "Ошибка! Одно из чисел вне диапазона!" << std::endl;
            return 1;
        }

        std::string result = compare_numbers(num1, num2);
        std::cout << result << std::endl;

        return 0;
    }