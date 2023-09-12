#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.TolmachevVV.Sprint0.Task2.Lib/Tyuiu.TolmachevVV.Sprint0.Task2.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task2V0* service = new ServiceV1();
			int a = 3;
			int b = 4;
			int c;

			c = service->Add(a, b);

			Assert::AreEqual(7, c);

		}
	};
}
