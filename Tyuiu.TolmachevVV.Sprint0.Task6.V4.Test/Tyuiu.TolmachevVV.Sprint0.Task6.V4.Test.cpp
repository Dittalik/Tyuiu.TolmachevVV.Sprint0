#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.TolmachevVV.Sprint0.Task6.V1-6.Lib/Tyuiu.TolmachevVV.Sprint0.Task6.V1-5.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuTolmachevVVSprint0Task6V4Test
{
	TEST_CLASS(TyuiuTolmachevVVSprint0Task6V4Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task6* serviceV4 = new ServiceV4();
			float a = 4;
			int b = 3;
			int d;
			d = serviceV4->Calculate(a, b);
			Assert::AreEqual(2, d);
		}
	};
}
