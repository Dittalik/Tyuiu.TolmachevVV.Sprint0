#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.TolmachevVV.Sprint0.Task7.V1-5.Lib/Tyuiu.TolmachevVV.Sprint0.Task7.V1-5.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuTolmachevVVSprint0Task7V5Test
{
	TEST_CLASS(TyuiuTolmachevVVSprint0Task7V5Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task7* serviceV5 = new ServiceV5();
			int a = 1234567;
			Assert::IsTrue(serviceV5->Rezalt(a));
		}
	};
}
