#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Acer\source\repos\2.5\2.5/2.5.cpp"
#include "C:\Users\Acer\source\repos\2.5\2.5/Liquid.cpp"
#include "C:\Users\Acer\source\repos\2.5\2.5/Solution.cpp"

#include <locale>
#include "windows.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			SetConsoleCP(1251);
			SetConsoleOutputCP(1251);
			Liquid a;
			Solution b;
			string c = "÷укровий";

			a.setName("÷укровий");
			a.setDensity(5);

			b.setLiquid(a);
			b.setAmount(1500);

			Assert::AreEqual(c, a.getName());
			Assert::AreEqual(5, a.getDensity());
			Assert::AreEqual(1500, b.getAmount());
		}
	};
}