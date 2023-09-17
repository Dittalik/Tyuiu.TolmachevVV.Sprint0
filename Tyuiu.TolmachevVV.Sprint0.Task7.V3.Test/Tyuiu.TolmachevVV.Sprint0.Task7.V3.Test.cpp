#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.TolmachevVV.Sprint0.Task7.V1-5.Lib/Tyuiu.TolmachevVV.Sprint0.Task7.V1-5.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuTolmachevVVSprint0Task7V3Test
{
	TEST_CLASS(TyuiuTolmachevVVSprint0Task7V3Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task7* serviceV3 = new ServiceV3();
			int a = 12345;
			Assert::IsTrue(serviceV3->Rezalt(a));
		}
	};
}
