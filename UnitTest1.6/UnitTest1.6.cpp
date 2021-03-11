#include "pch.h"
#include "CppUnitTest.h"
#include "../1.6/Date.h"
#include "../1.6/Date.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest16
{
	TEST_CLASS(UnitTest16)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Date::Triad t1;
			t1.Init(1, 2, 0);
			int test = t1.check();
			Assert::AreEqual(1, test);

		}
	};
}
