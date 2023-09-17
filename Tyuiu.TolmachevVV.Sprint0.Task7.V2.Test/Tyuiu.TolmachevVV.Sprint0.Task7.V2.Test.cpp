#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.TolmachevVV.Sprint0.Task7.V1-5.Lib/Tyuiu.TolmachevVV.Sprint0.Task7.V1-5.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuTolmachevVVSprint0Task7V2Test
{
	TEST_CLASS(TyuiuTolmachevVVSprint0Task7V2Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task7* serviceV2 = new ServiceV2();
			int a = 1234;
			Assert::IsTrue(serviceV2->Rezalt(a));
		}
	};
}
