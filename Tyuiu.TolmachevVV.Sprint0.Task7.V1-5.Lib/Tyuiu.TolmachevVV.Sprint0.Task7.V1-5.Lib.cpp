// Tyuiu.TolmachevVV.Sprint0.Task7.V1-5.Lib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"
#include <string>

using namespace std;

class ServiceV1 :public ISprint0Task7
{
	virtual float Rezalt(int a) override
	{
        int c = a;
        string s = to_string(c);
        int b = s.length();
        if (b == 3)
        {
            return true;
        }
        else
        {
            return false;
        }
	}
};
class ServiceV2 :public ISprint0Task7
{
    virtual float Rezalt(int a) override
    {
        int c = a;
        string s = to_string(c);
        int b = s.length();
        if (b == 4)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
class ServiceV3 :public ISprint0Task7
{
    virtual float Rezalt(int a) override
    {
        int c = a;
        string s = to_string(c);
        int b = s.length();
        if (b == 5)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
class ServiceV4 :public ISprint0Task7
{
    virtual float Rezalt(int a) override
    {
        int c = a;
        string s = to_string(c);
        int b = s.length();
        if (b == 6)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
class ServiceV5 :public ISprint0Task7
{
    virtual float Rezalt(int a) override
    {
        int c = a;
        string s = to_string(c);
        int b = s.length();
        if (b == 7)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
