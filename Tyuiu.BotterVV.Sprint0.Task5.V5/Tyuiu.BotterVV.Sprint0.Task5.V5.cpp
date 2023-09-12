// Tyuiu.BotterVV.Sprint0.Task5.V5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.BotterVV.Sprint0.Task5.V5.Lib/Tyuiu.BotterVV.Sprint0.Task5.V5.Lib.cpp"

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    ISprint0Task5* serviccc = new Service3();
    cout << "Botter\t" << "Vadim\t" << "Valeryevich\n";
    int a, b, c, per, plosh, summa;
    cout << "¬ведите первый катет : "; cin >> a;
    cout << "¬ведите второй катет : "; cin >> b;
    cout << "¬ведите гипотенузу: "; cin >> c;
    cout << "—умма периметра и площади = " << serviccc ->Zadacha(4, 5, 6) << endl;
    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
