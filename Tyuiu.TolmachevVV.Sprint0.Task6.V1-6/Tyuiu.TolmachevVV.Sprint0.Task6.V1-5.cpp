// Tyuiu.TolmachevVV.Sprint0.Task6.V1-6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "../Tyuiu.TolmachevVV.Sprint0.Task6.V1-6.Lib/Tyuiu.TolmachevVV.Sprint0.Task6.V1-5.Lib.cpp"

int main()
{
    setlocale(LC_ALL, "Russian");
    ISprint0Task6* serviceV1 = new ServiceV1();
    std::cout << "Tolmachev\a\t" << "Vitaly\t" << "Vladimirovich\n";
    std::cout << std::endl;
    std::cout << "Task6.V1\n";
    float a;
    int b;
    std::cout << "Введите первую переменную: ";
    std::cin >> a;
    std::cout << "Введите вторую переменную: ";
    std::cin >> b;
    std::cout << "Результат: " << serviceV1->Calculate(a, b);

    std::cout << std::endl;
    std::cout << std::endl;

    ISprint0Task6* serviceV2 = new ServiceV2();
    std::cout << "Task6.V2\n";
    std::cout << "Введите первую переменную: ";
    std::cin >> a;
    std::cout << "Введите вторую переменную: ";
    std::cin >> b;
    std::cout << "Результат: " << serviceV2->Calculate(a, b);

    std::cout << std::endl;
    std::cout << std::endl;

    ISprint0Task6* serviceV3 = new ServiceV3();
    std::cout << "Task6.V3\n";
    std::cout << "Введите первую переменную: ";
    std::cin >> a;
    std::cout << "Введите вторую переменную: ";
    std::cin >> b;
    std::cout << "Результат: " << serviceV3->Calculate(a, b);

    std::cout << std::endl;
    std::cout << std::endl;

    ISprint0Task6* serviceV4 = new ServiceV4();
    std::cout << "Task6.V4\n";
    std::cout << "Введите первую переменную: ";
    std::cin >> a;
    std::cout << "Введите вторую переменную: ";
    std::cin >> b;
    std::cout << "Результат: " << serviceV4->Calculate(a, b);

    std::cout << std::endl;
    std::cout << std::endl;

    ISprint0Task6* serviceV5 = new ServiceV5();
    std::cout << "Task6.V5\n";
    std::cout << "Введите первую переменную: ";
    std::cin >> a;
    std::cout << "Введите вторую переменную: ";
    std::cin >> b;
    std::cout << "Результат: " << serviceV5->Calculate(a, b);
}


