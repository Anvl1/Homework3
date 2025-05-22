#include <iostream>
#include <string>
#include <Windows.h>

static void horoscope (const std::string& gender, const std::string& sign, int age)
{
    const std::string water_sign[] = { "���", "��������", "����" };
    const std::string earth_sign[] = { "�����", "����", "�������" };

    if (gender == "�������") 
    {
        for (const auto& sign1 : water_sign)
        {
            if (sign == sign1 && age < 40) 
            {
                std::cout << "������� ����� ������������ ����. ����� �������� ����, ��� ������ �������� ����� �����������." << std::endl;
                return;
            }
        }
    }

    if (gender == "�������") 
    {
        for (const auto& sign1 : earth_sign)
        {
            if (sign == sign1 && age >= 15 && age <= 30) 
            {
                std::cout << "����������� ����� �������� ��� ������� � ��������, ���������� �������� ���������� � ����������������� ���������. ����� �� ������ ������, �� � ���������: ������� ����, ������� ������� ����." << std::endl;
                return;
            }
        }
    }

    std::cout << "�������� ��� ��� ��������� � ����������. ��������� ������� ����� ;)" << std::endl;
}

int main() 
{
    std::string gender;
    std::string sign;
    int age;

    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "rus");
    std:: wcout << L"������� ��� (�������/�������):\n";
	std::cin >> gender;
	std::wcout << L"������� ���� ������� (���, ��������, ����, �����, ����, �������):\n";
	std::cin >> sign;
	std::wcout << L"������� �������:\n";
	std::cin >> age;

    horoscope(gender, sign, age);

    return 0;
}