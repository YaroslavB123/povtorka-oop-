#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Acer\source\repos\7.4\7.4\7.4.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			map<int, Contacts> contactU;
			contactU[0].surname = "Буц";
			contactU[0].name = "Артем";
			contactU[0].number = "223";
			string s = "Буц", n = "Артем", number = "223";
			Assert::AreEqual(contactU[0].surname, s);
			Assert::AreEqual(contactU[0].name, n);
			Assert::AreEqual(contactU[0].number, number);
			int
				d = 1,
				m = 2,
				y = 3;
			contactU[0].bdate[0] = d;
			contactU[0].bdate[1] = m;
			contactU[0].bdate[2] = y;
			Assert::IsTrue(display(contactU, m));
		}
	};
}
