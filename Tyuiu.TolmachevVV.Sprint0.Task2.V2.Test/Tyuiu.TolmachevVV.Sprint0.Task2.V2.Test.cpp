#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.TolmachevVV.Sprint0.Task2.Lib/Tyuiu.TolmachevVV.Sprint0.Task2.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuTolmachevVVSprint0Task2V2Test
{
	TEST_CLASS(TyuiuTolmachevVVSprint0Task2V2Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task2V2* service = new ServiceV3();
			int a = 3.5;
			int b = 4;
			int c = 5;
			int d = 12.5;
			int answ;

			answ = service->SummV2(a, b, c);

			Assert::AreEqual(d, answ);
		}
	};
}
