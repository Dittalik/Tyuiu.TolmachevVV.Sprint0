#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.TolmachevVV.Sprint0.Task7.V1-5.Lib/Tyuiu.TolmachevVV.Sprint0.Task7.V1-5.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuTolmachevVVSprint0Task7V4Test
{
	TEST_CLASS(TyuiuTolmachevVVSprint0Task7V4Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task7* serviceV4 = new ServiceV4();
			int a = 123456;
			Assert::IsTrue(serviceV4->Rezalt(a));
		}
	};
}
