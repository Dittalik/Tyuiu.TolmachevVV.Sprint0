// Tyuiu.TolmachevVV.Sprint0.Task5.V1-5.Lib.cpp : Определяет функции для статической библиотеки.

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: Это пример библиотечной функции.
class ServiceV1 :public ISprint0Task5
{
	virtual float Zadacha(float a, float b, float c)
	{
		return a * b * c;
	}
};
class ServiceV2 :public ISprint0Task5
{
	virtual float Zadacha(float a, float b, float c)
	{
		return (a + b) * c;
	}
};
class ServiceV3 :public ISprint0Task5
{
	virtual float Zadacha(float a, float b, float c)
	{
		return a + b + c;
	}
};
class ServiceV4 :public ISprint0Task5
{
	virtual float Zadacha(float a, float b, float c)
	{
		return a * 2 * b / 100 * c;
	}
};
class ServiceV5 :public ISprint0Task5
{
	virtual float Zadacha(float a, float b, float c)
	{
		return (a + b + c) + (a * b / 2);
	}
};
