// Tyuiu.BotterVV.Sprint0.Task5.V5.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class Service3 :public ISprint0Task5
{
	virtual int Zadacha(float a, float b, float c)
	{
		return (a + b + c) + a * b / 2;
	};
};