#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.BotterVV.Sprint0.Task5.V5.Lib/Tyuiu.BotterVV.Sprint0.Task5.V5.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task5* serviccc = new Service3();
			int a = 4;
			int b = 5;
			int c = 6;
			int d;

			d = serviccc->Zadacha(a, b, c);


			Assert::AreEqual(25, d);
		}
	};
}