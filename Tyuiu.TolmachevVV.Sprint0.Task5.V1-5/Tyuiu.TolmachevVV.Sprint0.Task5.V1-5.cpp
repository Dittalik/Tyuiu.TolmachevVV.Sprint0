// Tyuiu.TolmachevVV.Sprint0.Task5.V1-5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "../Tyuiu.TolmachevVV.Sprint0.Task5.V1-5.Lib/Tyuiu.TolmachevVV.Sprint0.Task5.V1-5.Lib.cpp"

int main()
{
    setlocale(LC_ALL, "Russian");
    ISprint0Task5* serviceV1 = new ServiceV1();
    std::cout << "Tolmachev\a\t" << "Vitaly\t" << "Tolmachev\n";
    std::cout << std::endl;
    std::cout << "Task5.V1\n";
    float a;
    float b;
    float c;
    std::cout << "Введите длину: ";
    std::cin >> a;
    std::cout << "Введите ширину: ";
    std::cin >> b;
    std::cout << "Введите высоту: ";
    std::cin >> c;
    std::cout << "Объем равен: " << serviceV1->Zadacha(a, b, c);

    std::cout << std::endl;
    std::cout << std::endl;

    ISprint0Task5* serviceV2 = new ServiceV2();
    std::cout << "Task5.V2\n";
    std::cout << "Введите цену тетрадей: ";
    std::cin >> a;
    std::cout << "Введите цену обложек: ";
    std::cin >> b;
    std::cout << "Введите количество комплектов: ";
    std::cin >> c;
    std::cout << "Стоимость покупки: " << serviceV2->Zadacha(a, b, c);

    std::cout << std::endl;
    std::cout << std::endl;

    ISprint0Task5* serviceV3 = new ServiceV3();
    std::cout << "Task5.V3\n";
    std::cout << "Введите цену конфет Ивана: ";
    std::cin >> a;
    std::cout << "Введите цену конфет Сестры: ";
    std::cin >> b;
    std::cout << "Введите цену печенья: ";
    std::cin >> c;
    std::cout << "Стоимость покупки: " << serviceV3->Zadacha(a, b, c);

    std::cout << std::endl;
    std::cout << std::endl;

    ISprint0Task5* serviceV4 = new ServiceV4();
    std::cout << "Task5.V4\n";
    std::cout << "Введите расстояние до дачи: ";
    std::cin >> a;
    std::cout << "Введите расход бензина на 100 км: ";
    std::cin >> b;
    std::cout << "Введите цену литра бензина: ";
    std::cin >> c;
    std::cout << "Стоимость поездки: " << serviceV4->Zadacha(a, b, c);

    std::cout << std::endl;
    std::cout << std::endl;

    ISprint0Task5* serviceV5 = new ServiceV5();
    std::cout << "Task5.V5\n";
    std::cout << "Task5.V4\n";
    std::cout << "Введите длину первого катета: ";
    std::cin >> a;
    std::cout << "Введите длину второго катета: ";
    std::cin >> b;
    std::cout << "Введите гипотенузы: ";
    std::cin >> c;
    std::cout << "Сумма равна: " << serviceV5->Zadacha(a, b, c);

}


