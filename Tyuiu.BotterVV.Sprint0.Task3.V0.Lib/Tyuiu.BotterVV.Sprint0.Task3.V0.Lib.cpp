// Tyuiu.BotterVV.Sprint0.Task3.V0.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class Service :public ISprint0Task3V0
{


	virtual int Add(int a, int b, int c) override
	{
		return a + b + c;
	}
};