#include "pch.h"
#include "CppUnitTest.h"
#include "../PDC_LAB1_2/source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(checkOR)
		{
			Truth truth = Truth("110011001", "101011010");
			long long a, b;
			truth.calcOr();
			a = stol(truth.getOR());
			b = 111011011;
			Assert::AreEqual(a, b);
		}
		TEST_METHOD(checkAND)
		{
			Truth truth = Truth("110011001", "101011010");
			long long a, b;
			truth.calcAnd();
			a = stol(truth.getAND());
			b = 100011000;
			Assert::AreEqual(a, b);
		}
		TEST_METHOD(checkXOR)
		{
			Truth truth = Truth("110011001", "101011010");
			long long a, b;
			truth.calcXor();
			a = stol(truth.getXOR());
			b = 11000011;
			Assert::AreEqual(a, b);
		}
	};
}