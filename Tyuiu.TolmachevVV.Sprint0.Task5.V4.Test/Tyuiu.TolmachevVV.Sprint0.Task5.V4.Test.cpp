#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.TolmachevVV.Sprint0.Task5.V1-5.Lib/Tyuiu.TolmachevVV.Sprint0.Task5.V1-5.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuTolmachevVVSprint0Task5V4Test
{
	TEST_CLASS(TyuiuTolmachevVVSprint0Task5V4Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task5* serviceV4 = new ServiceV4();
			float a = 67;
			float b = 8.5;
			float c = 6.5;
			float answer = 74.035;
			float d;
			d = serviceV4->Zadacha(a, b, c);
			Assert::AreEqual(answer, d);
		}
	};
}
