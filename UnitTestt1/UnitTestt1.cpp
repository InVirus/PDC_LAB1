#include "pch.h"
#include "CppUnitTest.h"
#include "../PDC_LAB1/source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestt1
{
	TEST_CLASS(UnitTestt1)
	{
	public:

		TEST_METHOD(CheckAnd)
		{
			bool p = true, q = false;
			Truth truth = Truth(p, q);
			Assert::AreEqual((int)truth.checkAnd(), 0);
		}
		TEST_METHOD(CheckOr)
		{
			bool p = true, q = false;
			Truth truth = Truth(p, q);
			Assert::AreEqual((int)truth.checkOr(), 1);
		}
		TEST_METHOD(CheckXor)
		{
			bool p = true, q = false;
			Truth truth = Truth(p, q);
			Assert::AreEqual((int)truth.checkXor(), 1);
		}
		TEST_METHOD(CheckFirstImplication)
		{
			bool p = true, q = false;
			Truth truth = Truth(p, q);
			Assert::AreEqual((int)truth.checkFirstImplication(), 0);
		}
		TEST_METHOD(CheckSecondImplication)
		{
			bool p = true, q = false;
			Truth truth = Truth(p, q);
			Assert::AreEqual((int)truth.checkSecondImplication(), 1);
		}
		TEST_METHOD(checkEquivalence)
		{
			bool p = true, q = false;
			Truth truth = Truth(p, q);
			Assert::AreEqual((int)truth.checkEquivalence(), 0);
		}
	};
}