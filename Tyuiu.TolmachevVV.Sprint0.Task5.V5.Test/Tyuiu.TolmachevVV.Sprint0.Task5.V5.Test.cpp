#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.TolmachevVV.Sprint0.Task5.V1-5.Lib/Tyuiu.TolmachevVV.Sprint0.Task5.V1-5.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuTolmachevVVSprint0Task5V5Test
{
	TEST_CLASS(TyuiuTolmachevVVSprint0Task5V5Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task5* serviceV5 = new ServiceV5();
			float a = 4;
			float b = 5;
			float c = 6;
			float answer = 25;
			float d;
			d = serviceV5->Zadacha(a, b, c);
			Assert::AreEqual(answer, d);
		}
	};
}
