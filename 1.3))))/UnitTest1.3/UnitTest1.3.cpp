#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Acer\source\repos\1.3))))\1.3))))\1.3)))).cpp"
#include "C:\Users\Acer\source\repos\1.3))))\1.3))))\VectorN.h"
#include "C:\Users\Acer\source\repos\1.3))))\1.3))))\VectorN.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			VectorN FirstVector, SecondVector;
			FirstVector.setN(2);
			FirstVector.setA(1, 0);
			FirstVector.setA(2, 1);
			int length1 = FirstVector.lVector();

			SecondVector.setN(2);
			SecondVector.setA(1, 0);
			SecondVector.setA(2, 1);
			int length2 = SecondVector.lVector();
			bool t = SecondVector.Compare(FirstVector);


			FirstVector.setN(2);
			FirstVector.setA(1, 0);
			FirstVector.setA(2, 1);


			SecondVector.setN(2);
			SecondVector.setA(1, 0);
			SecondVector.setA(100, 1);

			bool f = SecondVector.Compare(FirstVector);
			Assert::IsTrue(t);
			Assert::IsFalse(f);
			Assert::AreEqual(length1, length2);
		}
	};
}