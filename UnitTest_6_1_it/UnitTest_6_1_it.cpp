#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6_1_it/Lab_06_1_it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61it
{
	TEST_CLASS(UnitTest61it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 5;
			int x[n] = { 22, 6, -4, 0, -1 };
			int expectation = CountElements(x, n);
			int actual = 2;
			Assert::AreEqual(expectation, actual);
		}
	};
}
