// Tyuiu.TolmachevVV.Sprint0.Task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "../Tyuiu.TolmachevVV.Sprint0.Task2.Lib/Tyuiu.TolmachevVV.Sprint0.Task2.Lib.cpp"

int main()
{
    setlocale(LC_ALL, "Russian");

    ISprint0Task2V0* serviceV1 = new ServiceV1();
    std::cout << "Толмачев Виталий\n";
    std::cout << "Task2.V0\n";
    std::cout << std::endl;
    std::cout << "Напишите число: ";
    int a;
    int b;
    int c;
    float a1;
    std::cin >> a;
    std::cout << "Напишите второе число число: ";
    std::cin >> b;
    std::cout << std::endl;
    std::cout << "Сумма: " << serviceV1->Add(a, b);

    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Task2.V1\n";
    ISprint0Task2V1* serviceV2 = new ServiceV2();
    std::cout << "Напишите первое дробное число: ";
    std::cin >> a1;
    std::cout << "Напишите второе целое число: ";
    std::cin >> b;
    std::cout << "Напишите третье целое число: ";
    std::cin >> c;
    std::cout << "Сумма: " << serviceV2->Summ(a1, b, c);

    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Task2.V2\n";
    ISprint0Task2V2* serviceV3 = new ServiceV3();
    std::cout << "Напишите первое число: ";
    std::cin >> a1;
    std::cout << "Напишите второе число: ";
    std::cin >> b;
    std::cout << "Напишите третье число: ";
    std::cin >> c;
    std::cout << "Сумма: " << serviceV3->SummV2(a1, b, c);

}

