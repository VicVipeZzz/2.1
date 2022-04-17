#include "pch.h"
#include "CppUnitTest.h"
#include "../2.1/IntPower.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			float first = 2;
			int second = 2;
			IntPower p;
			p.power();
			Assert::AreEqual(p.power(), 4);
		}
	};
}
