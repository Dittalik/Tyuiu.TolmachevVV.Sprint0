#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.TolmachevVV.Sprint0.Task6.V1-6.Lib/Tyuiu.TolmachevVV.Sprint0.Task6.V1-5.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuTolmachevVVSprint0Task6V3Test
{
	TEST_CLASS(TyuiuTolmachevVVSprint0Task6V3Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task6* serviceV3 = new ServiceV3();
			float a = 5;
			int b = 3;
			int d;
			d = serviceV3->Calculate(a, b);
			Assert::AreEqual(10, d);
		}
	};
}
