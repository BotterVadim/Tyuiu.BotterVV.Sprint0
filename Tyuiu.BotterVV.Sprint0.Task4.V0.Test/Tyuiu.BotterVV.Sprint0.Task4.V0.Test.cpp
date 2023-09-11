#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.BotterVV.Sprint0.Task4.V0.Lib/Tyuiu.BotterVV.Sprint0.Task4.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task4* servicc = new Service2();
			int a = 25;
			int b = 8;
			int c = 4;
			int d = 9;
			int e;

			e = servicc->Calculate(a, b, c, d);
			

			Assert::AreEqual(7, e);


		}
	};
}
