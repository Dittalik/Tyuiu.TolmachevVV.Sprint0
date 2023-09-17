// Tyuiu.TolmachevVV.Sprint0.Task6.V1-6.Lib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: Это пример библиотечной функции.
class ServiceV1 : public ISprint0Task6
{
	virtual float Calculate(float a, int b)
	{
		return a / 3 / b + 6;
	}
};
class ServiceV2 :public ISprint0Task6
{
	virtual float Calculate(float a, int b)
	{
		return a * b / (5 + a) + 6;
	}
};
class ServiceV3 :public ISprint0Task6
{
	virtual float Calculate(float a, int b)
	{
		return (5 + (a * b / 3));
	}
};
class ServiceV4 :public ISprint0Task6
{
	virtual float Calculate(float a, int b)
	{
		return (5 * a) / (7 + b);
	}
};
class ServiceV5 :public ISprint0Task6
{
	virtual float Calculate(float a, int b)
	{
		return (a * 8) / b * 2;
	}
};
