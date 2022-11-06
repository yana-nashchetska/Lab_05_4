#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05_4/Lab_05_4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double tt;
			tt = S0(2, 10);
			Assert::AreEqual(tt, 2.72756, 0.001);

		}
	};
}
