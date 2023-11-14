#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_8.1.rec/lab_8.1.rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1LAB81rec
{
	TEST_CLASS(UnitTest1LAB81rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[] = "aaaabbccccdd";
			int result = Count(str, 0);
			Assert::AreEqual(2, result);
		}
	};
}
