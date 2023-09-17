// Tyuiu.TolmachevVV.Sprint0.Task7.V1-5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iostream>
#include "../Tyuiu.TolmachevVV.Sprint0.Task7.V1-5.Lib/Tyuiu.TolmachevVV.Sprint0.Task7.V1-5.Lib.cpp"
#include <math.h>
#include <string>

int main()
{
    setlocale(LC_ALL, "Russian");
    ISprint0Task7* serviceV1 = new ServiceV1();
    std::cout << "Tolmachev\a\t" << "Vitaly\t" << "Vladimirovich\n";
    std::cout << std::endl;
    std::cout << "Task7.V1\n";

    std::cout << std::endl;
    std::cout << std::endl;

    int x, n;

    std::cout << "Введите трёхзначное число: ";
    std::cin >> x;
    if (serviceV1->Rezalt(x) == true)
    {
        std::cout << "Введите число на проверку: ";
        std::cin >> n;
        string sx = to_string(x);
        string sn = to_string(n);
        if (sx.find(sn) < 3)
        {
            std::cout << "В числе " << sx << " есть цифра " << sn + "\n";
        }
        else
        {
            std::cout << "В числе " << sx << " нет цифры " << sn + "\n";
        }

    }
    else
    {
        std::cout << "Введено не трёхзначное число\n";
    }
    ISprint0Task7* serviceV2 = new ServiceV2();

    std::cout << std::endl;
    std::cout << "Task7.V2\n";

    std::cout << std::endl;
    std::cout << std::endl;


    std::cout << "Введите 4-значное число: ";
    std::cin >> x;
    if (serviceV2->Rezalt(x) == true)
    {
        std::cout << "Введите число на проверку: ";
        std::cin >> n;
        string sx = to_string(x);
        string sn = to_string(n);
        if (sx.find(sn) < 4)
        {
            std::cout << "В числе " << sx << " есть цифра " << sn + "\n";
        }
        else
        {
            std::cout << "В числе " << sx << " нет цифры " << sn + "\n";
        }

    }
    else
    {
        std::cout << "Введено не 4-значное число\n";
    }
    ISprint0Task7* serviceV3 = new ServiceV3();
    std::cout << std::endl;
    std::cout << "Task7.V3\n";

    std::cout << std::endl;
    std::cout << std::endl;


    std::cout << "Введите 5-значное число: ";
    std::cin >> x;
    if (serviceV3->Rezalt(x) == true)
    {
        std::cout << "Введите число на проверку: ";
        std::cin >> n;
        string sx = to_string(x);
        string sn = to_string(n);
        if (sx.find(sn) < 5)
        {
            std::cout << "В числе " << sx << " есть цифра " << sn + "\n";
        }
        else
        {
            std::cout << "В числе " << sx << " нет цифры " << sn + "\n";
        }

    }
    else
    {
        std::cout << "Введено не 5-значное число\n";
    }
    ISprint0Task7* serviceV4 = new ServiceV4();

    std::cout << std::endl;
    std::cout << "Task7.V4\n";

    std::cout << std::endl;
    std::cout << std::endl;


    std::cout << "Введите 6-значное число: ";
    std::cin >> x;
    if (serviceV4->Rezalt(x) == true)
    {
        std::cout << "Введите число на проверку: ";
        std::cin >> n;
        string sx = to_string(x);
        string sn = to_string(n);
        if (sx.find(sn) < 6)
        {
            std::cout << "В числе " << sx << " есть цифра " << sn + "\n";
        }
        else
        {
            std::cout << "В числе " << sx << " нет цифры " << sn + "\n";
        }

    }
    else
    {
        std::cout << "Введено не 6-значное число\n";
    }
    ISprint0Task7* serviceV5 = new ServiceV5();

    std::cout << std::endl;
    std::cout << "Task7.V5\n";

    std::cout << std::endl;
    std::cout << std::endl;


    std::cout << "Введите 7-значное число: ";
    std::cin >> x;
    if (serviceV5->Rezalt(x) == true)
    {
        std::cout << "Введите число на проверку: ";
        std::cin >> n;
        string sx = to_string(x);
        string sn = to_string(n);
        if (sx.find(sn) < 7)
        {
            std::cout << "В числе " << sx << " есть цифра " << sn + "\n";
        }
        else
        {
            std::cout << "В числе " << sx << " нет цифры " << sn + "\n";
        }

    }
    else
    {
        std::cout << "Введено не 7-значное число\n";
    }
}




