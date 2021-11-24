#include "pch.h"
#include "CppUnitTest.h"
#include "../lab8.1char/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			int number = 0;
			char str[101];
			t = Count(str);
			Assert::AreEqual(t, number);
		}
	};
}
