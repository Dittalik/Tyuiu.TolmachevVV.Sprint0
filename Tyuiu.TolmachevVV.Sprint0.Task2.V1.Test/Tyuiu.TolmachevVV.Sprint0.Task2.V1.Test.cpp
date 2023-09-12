#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.TolmachevVV.Sprint0.Task2.Lib/Tyuiu.TolmachevVV.Sprint0.Task2.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuTolmachevVVSprint0Task2V1Test
{
	TEST_CLASS(TyuiuTolmachevVVSprint0Task2V1Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task2V1* service = new ServiceV2();
			float a = 3.5;
			int b = 4;
			int c = 5;
			float d = 12.5;
			float answ;

			answ = service->Summ(a, b, c);

			Assert::AreEqual(d, answ);
		}
	};
}
