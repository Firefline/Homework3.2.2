﻿// Homework3.2.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

struct bank
{
    int account = 0;
    std::string name;
    int money = 0;
};

void change(bank* cash, int new_cash)
{
    cash->money = new_cash;
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");

    bank person;
    int new_balance;
    std::cout << "Введите номер счёта: ";
    std::cin >> person.account;
    std::cout << "Введите имя владельца: ";
    std::cin >> person.name;
    std::cout << "Введите баланс: ";
    std::cin >> person.money;
    std::cout << "Введите новый баланс: ";
    std::cin >> new_balance;

    change(&person, new_balance);

    std::cout << "Ваш счёт: " << person.name << ", " << person.account << ", " << person.money << std::endl;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
