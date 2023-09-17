#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.TolmachevVV.Sprint0.Task6.V1-6.Lib/Tyuiu.TolmachevVV.Sprint0.Task6.V1-5.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuTolmachevVVSprint0Task6V1Test
{
	TEST_CLASS(TyuiuTolmachevVVSprint0Task6V1Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task6* serviceV1 = new ServiceV1();
			float a = 3;
			int b = 1;
			int d;
			d = serviceV1->Calculate(a, b);
			Assert::AreEqual(7, d);
		}
	};
}
