#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.TolmachevVV.Sprint0.Task5.V1-5.Lib/Tyuiu.TolmachevVV.Sprint0.Task5.V1-5.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuTolmachevVVSprint0Task5V3Test
{
	TEST_CLASS(TyuiuTolmachevVVSprint0Task5V3Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task5* serviceV3 = new ServiceV3();
			float a = 5.45;
			float b = 2.5;
			float c = 3;
			float answer =	10.95;
			float d;
			d = serviceV3->Zadacha(a, b, c);
			Assert::AreEqual(answer, d);
		}
	};
}
