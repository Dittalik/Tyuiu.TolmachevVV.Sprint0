// Tyuiu.TolmachevVV.Sprint0.Task3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "../Tyuiu.TolmachevVV.Sprint0.Task3.Lib/Tyuiu.TolmachevVV.Sprint0.Task3.Lib.cpp"

using namespace std;
int main()
{
    ISprint0Task3* date = new Service();
    cout << "PepeovPA\n";
    cout << "P = a + b + c\n";
    cout << "Result = " << date->SummV3(10, 8, 7);
    cout << endl;

    
}

