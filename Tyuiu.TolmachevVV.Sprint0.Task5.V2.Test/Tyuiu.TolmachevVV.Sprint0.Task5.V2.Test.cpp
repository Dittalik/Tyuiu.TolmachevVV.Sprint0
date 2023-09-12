#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.TolmachevVV.Sprint0.Task5.V1-5.Lib/Tyuiu.TolmachevVV.Sprint0.Task5.V1-5.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuTolmachevVVSprint0Task5V2Test
{
	TEST_CLASS(TyuiuTolmachevVVSprint0Task5V2Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task5* serviceV2 = new ServiceV2();
			float a = 2.75;
			float b = 0.5;
			float c = 7;
			float answer = 22.75;
			float d;
			d = serviceV2->Zadacha(a, b, c);
			Assert::AreEqual(answer, d);
		}
		
	};
}
