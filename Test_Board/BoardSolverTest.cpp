#include "stdafx.h"
#include "CppUnitTest.h"
#include "../PuzzelSolver/BoardSolver.h"
#include "../PuzzelSolver/BoardSolver.cpp"
#include <iostream>
#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BoardSolverTest
{
	TEST_CLASS(CalcH_Test)
	{
	public:
		TEST_METHOD(calcH_Test0)
		{
			Board testA((std::string)"012345678");
			Assert::AreEqual(9 ,calcH(testA));
		}
		TEST_METHOD(calcH_Test1)
		{
			Board testA((std::string)"123456780");
			Assert::AreEqual(0, calcH(testA));
		}
		TEST_METHOD(calcH_Test2)
		{
			Board testA((std::string)"123456780", "udulr");
			Assert::AreEqual(5, calcH(testA));
		}
		TEST_METHOD(calcH_Test3)
		{
			Board testA((std::string)"012345678", "udulr");
			Assert::AreEqual(14, calcH(testA));
		}
	};
	TEST_CLASS(Search_Test)
	{
	public:
		TEST_METHOD(bredthFirst_Test0) 
		{
			BoardSolver test((std::string)"123456708");
			Assert::AreEqual((std::string)"r", test.breadthFirst());
		}
		TEST_METHOD(bredthFirst_Test1)
		{
			BoardSolver test((std::string)"12345678");
			Assert::AreEqual((std::string)"drrullddruurdllurrdldr", test.breadthFirst());
		}

		TEST_METHOD(aStar_Test0)
		{
			BoardSolver test((std::string)"123456708");
			Assert::AreEqual((std::string)"r", test.aStar());
		}
		TEST_METHOD(aStar_Test1)
		{
			BoardSolver test((std::string)"12345678");
			Assert::AreEqual((std::string)"rdldrrulldruurddllurrd", test.aStar());
		}

		TEST_METHOD(aStar2_Test0)
		{
			BoardSolver test((std::string)"123456708");
			Assert::AreEqual((std::string)"r", test.aStar2());
		}
		TEST_METHOD(aStar2_Test1)
		{
			BoardSolver test((std::string)"12345678");
			Assert::AreEqual((std::string)"rdldrrulldruurddllurrd", test.aStar2());
		}
	};
}