#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.BotterVV.Sprint0.Task3.V0.Lib/Tyuiu.BotterVV.Sprint0.Task3.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			ISprint0Task3V0* date = new Service();
			int a = 5;
			int b = 8;
			int c = 3;
			int d;

			d = date->Add(a, b, c);


			Assert::AreEqual(16, d);
		}
	};
}
