// Варіант 3
#include <iostream>
#include<iomanip>
#include <locale>
#include "windows.h"

#include "Liquid.h" 
#include "Solution.h" 

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Solution s;
	s.Read();
	s.Display();
}