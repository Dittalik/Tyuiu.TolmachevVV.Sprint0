// Tyuiu.TolmachevVV.Sprint0.Task3.Lib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: Это пример библиотечной функции.
class Service:public ISprint0Task3
{
	virtual int SummV3(int a, int b, int c) override
	{
		return a + b + c;
	};
};