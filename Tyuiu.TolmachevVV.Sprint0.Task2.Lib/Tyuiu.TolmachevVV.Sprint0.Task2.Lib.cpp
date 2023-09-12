// Tyuiu.TolmachevVV.Sprint0.Task2.Lib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"


// TODO: Это пример библиотечной функции.
class ServiceV1 :public ISprint0Task2V0
{

	virtual int Add(int a, int b) override
	{
		return a + b;

	}
};
class ServiceV2 :public ISprint0Task2V1
{
	virtual float Summ(float a, int b, int c)
	{
		return a + b + c;
	}
};
class ServiceV3 :public ISprint0Task2V2
{
	virtual int SummV2(int a, int b, int c)
	{
		return a + b + c;
	}
};