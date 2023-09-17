#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.TolmachevVV.Sprint0.Task6.V1-6.Lib/Tyuiu.TolmachevVV.Sprint0.Task6.V1-5.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuTolmachevVVSprint0Task6V2Test
{
	TEST_CLASS(TyuiuTolmachevVVSprint0Task6V2Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task6* serviceV2 = new ServiceV2();
			float a = 1;
			int b = 6;
			int d;
			d = serviceV2->Calculate(a, b);
			Assert::AreEqual(7, d);
		}
	};
}
