#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.TolmachevVV.Sprint0.Task5.V1-5.Lib/Tyuiu.TolmachevVV.Sprint0.Task5.V1-5.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuTolmachevVVSprint0Task5V1Test
{
	TEST_CLASS(TyuiuTolmachevVVSprint0Task5V1Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task5* serviceV1 = new ServiceV1();
			float a = 9;
			float b = 7.5;
			float c = 5;
			float answer = 337.5;
			float d;
			d = serviceV1->Zadacha(a, b, c);
			Assert::AreEqual(answer, d);
		}
	};
}
