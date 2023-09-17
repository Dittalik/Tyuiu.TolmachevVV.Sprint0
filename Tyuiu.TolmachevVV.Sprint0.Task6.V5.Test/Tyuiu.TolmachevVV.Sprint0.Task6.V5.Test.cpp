#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.TolmachevVV.Sprint0.Task6.V1-6.Lib/Tyuiu.TolmachevVV.Sprint0.Task6.V1-5.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuTolmachevVVSprint0Task6V5Test
{
	TEST_CLASS(TyuiuTolmachevVVSprint0Task6V5Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task6* serviceV5 = new ServiceV5();
			float a = 2;
			int b = 4;
			int d;
			d = serviceV5->Calculate(a, b);
			Assert::AreEqual(8, d);
		}
	};
}
