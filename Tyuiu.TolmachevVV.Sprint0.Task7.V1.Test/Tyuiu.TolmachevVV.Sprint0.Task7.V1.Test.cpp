#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.TolmachevVV.Sprint0.Task7.V1-5.Lib/Tyuiu.TolmachevVV.Sprint0.Task7.V1-5.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuTolmachevVVSprint0Task7V1Test
{
	TEST_CLASS(TyuiuTolmachevVVSprint0Task7V1Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task7* serviceV1 = new ServiceV1();
			int a = 123;
			Assert::IsTrue(serviceV1->Rezalt(a));
		}
	};
}
