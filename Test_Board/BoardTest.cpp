#include "stdafx.h"
#include "CppUnitTest.h"
#include "../PuzzelSolver/Board.h"
#include "../PuzzelSolver/Board.cpp"
#include <iostream>
#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BoardTest
{		
	TEST_CLASS(ShiftTest)
	{
	public:
		TEST_METHOD(ShiftRight_Test0)
		{
			// TODO: Your test code here
			Board testA((std::string)"012345678");
			Board testB(testA.shiftRight());
			Assert::IsTrue(testB.getBoard() == "102345678");
		}
		TEST_METHOD(ShiftRight_Test1)
		{
			// TODO: Your test code here
			Board testA((std::string)"102345678");
			Board testB(testA.shiftRight());
			Assert::IsTrue(testB.getBoard() == "120345678");
		}
		TEST_METHOD(ShiftRight_Test2)
		{
			// TODO: Your test code here
			Board testA((std::string)"120345678");
			Board testB(testA.shiftRight());
			Assert::IsTrue(testB.getBoard() == "120345678");
		}
		TEST_METHOD(ShiftRight_Test3)
		{
			// TODO: Your test code here
			Board testA((std::string)"123045678");
			Board testB(testA.shiftRight());
			Assert::IsTrue(testB.getBoard() == "123405678");
		}
		TEST_METHOD(ShiftRight_Test4)
		{
			// TODO: Your test code here
			Board testA((std::string)"123405678");
			Board testB(testA.shiftRight());
			Assert::IsTrue(testB.getBoard() == "123450678");
		}
		TEST_METHOD(ShiftRight_Test5)
		{
			// TODO: Your test code here
			Board testA((std::string)"123450678");
			Board testB(testA.shiftRight());
			Assert::IsTrue(testB.getBoard() == "123450678");
		}
		TEST_METHOD(ShiftRight_Test6)
		{
			// TODO: Your test code here
			Board testA((std::string)"123456078");
			Board testB(testA.shiftRight());
			Assert::IsTrue(testB.getBoard() == "123456708");
		}
		TEST_METHOD(ShiftRight_Test7)
		{
			// TODO: Your test code here
			Board testA((std::string)"123456708");
			Board testB(testA.shiftRight());
			Assert::IsTrue(testB.getBoard() == "123456780");
		}
		TEST_METHOD(ShiftRight_Test8)
		{
			// TODO: Your test code here
			Board testA((std::string)"123456780");
			Board testB(testA.shiftRight());
			Assert::IsTrue(testB.getBoard() == "123456780");
		}

		TEST_METHOD(ShiftLeft_Test0)
		{
			// TODO: Your test code here
			Board testA((std::string)"012345678");
			Board testB(testA.shiftLeft());
			Assert::IsTrue(testB.getBoard() == "012345678");
		}
		TEST_METHOD(ShiftLeft_Test1)
		{
			// TODO: Your test code here
			Board testA((std::string)"102345678");
			Board testB(testA.shiftLeft());
			Assert::IsTrue(testB.getBoard() == "012345678");
		}
		TEST_METHOD(ShiftLeft_Test2)
		{
			// TODO: Your test code here
			Board testA((std::string)"120345678");
			Board testB(testA.shiftLeft());
			Assert::IsTrue(testB.getBoard() == "102345678");
		}
		TEST_METHOD(ShiftLeft_Test3)
		{
			// TODO: Your test code here
			Board testA((std::string)"123045678");
			Board testB(testA.shiftLeft());
			Assert::IsTrue(testB.getBoard() == "123045678");
		}
		TEST_METHOD(ShiftLeft_Test4)
		{
			// TODO: Your test code here
			Board testA((std::string)"123405678");
			Board testB(testA.shiftLeft());
			Assert::IsTrue(testB.getBoard() == "123045678");
		}
		TEST_METHOD(ShiftLeft_Test5)
		{
			// TODO: Your test code here
			Board testA((std::string)"123450678");
			Board testB(testA.shiftLeft());
			Assert::IsTrue(testB.getBoard() == "123405678");
		}
		TEST_METHOD(ShiftLeft_Test6)
		{
			// TODO: Your test code here
			Board testA((std::string)"123456078");
			Board testB(testA.shiftLeft());
			Assert::IsTrue(testB.getBoard() == "123456078");
		}
		TEST_METHOD(ShiftLeft_Test7)
		{
			// TODO: Your test code here
			Board testA((std::string)"123456708");
			Board testB(testA.shiftLeft());
			Assert::IsTrue(testB.getBoard() == "123456078");
		}
		TEST_METHOD(ShiftLeft_Test8)
		{
			// TODO: Your test code here
			Board testA((std::string)"123456780");
			Board testB(testA.shiftLeft());
			Assert::IsTrue(testB.getBoard() == "123456708");
		}

		TEST_METHOD(ShiftUp_Test0)
		{
			// TODO: Your test code here
			Board testA((std::string)"012345678");
			Board testB(testA.shiftUp());
			Assert::IsTrue(testB.getBoard() == "012345678");
		}
		TEST_METHOD(ShiftUp_Test1)
		{
			// TODO: Your test code here
			Board testA((std::string)"102345678");
			Board testB(testA.shiftUp());
			Assert::IsTrue(testB.getBoard() == "102345678");
		}
		TEST_METHOD(ShiftUp_Test2)
		{
			// TODO: Your test code here
			Board testA((std::string)"120345678");
			Board testB(testA.shiftUp());
			Assert::IsTrue(testB.getBoard() == "120345678");
		}
		TEST_METHOD(ShiftUp_Test3)
		{
			// TODO: Your test code here
			Board testA((std::string)"123045678");
			Board testB(testA.shiftUp());
			Assert::IsTrue(testB.getBoard() == "023145678");
		}
		TEST_METHOD(ShiftUp_Test4)
		{
			// TODO: Your test code here
			Board testA((std::string)"123405678");
			Board testB(testA.shiftUp());
			Assert::IsTrue(testB.getBoard() == "103425678");
		}
		TEST_METHOD(ShiftUp_Test5)
		{
			// TODO: Your test code here
			Board testA((std::string)"123450678");
			Board testB(testA.shiftUp());
			Assert::IsTrue(testB.getBoard() == "120453678");
		}
		TEST_METHOD(ShiftUp_Test6)
		{
			// TODO: Your test code here
			Board testA((std::string)"123456078");
			Board testB(testA.shiftUp());
			Assert::IsTrue(testB.getBoard() == "123056478");
		}
		TEST_METHOD(ShiftUp_Test7)
		{
			// TODO: Your test code here
			Board testA((std::string)"123456708");
			Board testB(testA.shiftUp());
			Assert::IsTrue(testB.getBoard() == "123406758");
		}
		TEST_METHOD(ShiftUp_Test8)
		{
			// TODO: Your test code here
			Board testA((std::string)"123456780");
			Board testB(testA.shiftUp());
			Assert::IsTrue(testB.getBoard() == "123450786");
		}

		TEST_METHOD(ShiftDown_Test0)
		{
			// TODO: Your test code here
			Board testA((std::string)"012345678");
			Board testB(testA.shiftDown());
			Assert::IsTrue(testB.getBoard() == "312045678");
		}
		TEST_METHOD(ShiftDown_Test1)
		{
			// TODO: Your test code here
			Board testA((std::string)"102345678");
			Board testB(testA.shiftDown());
			Assert::IsTrue(testB.getBoard() == "142305678");
		}
		TEST_METHOD(ShiftDown_Test2)
		{
			// TODO: Your test code here
			Board testA((std::string)"120345678");
			Board testB(testA.shiftDown());
			Assert::IsTrue(testB.getBoard() == "125340678");
		}
		TEST_METHOD(ShiftDown_Test3)
		{
			// TODO: Your test code here
			Board testA((std::string)"123045678");
			Board testB(testA.shiftDown());
			Assert::IsTrue(testB.getBoard() == "123645078");
		}
		TEST_METHOD(ShiftDown_Test4)
		{
			// TODO: Your test code here
			Board testA((std::string)"123405678");
			Board testB(testA.shiftDown());
			Assert::IsTrue(testB.getBoard() == "123475608");
		}
		TEST_METHOD(ShiftDown_Test5)
		{
			// TODO: Your test code here
			Board testA((std::string)"123450678");
			Board testB(testA.shiftDown());
			Assert::IsTrue(testB.getBoard() == "123458670");
		}
		TEST_METHOD(ShiftDown_Test6)
		{
			// TODO: Your test code here
			Board testA((std::string)"123456078");
			Board testB(testA.shiftDown());
			Assert::IsTrue(testB.getBoard() == "123456078");
		}
		TEST_METHOD(ShiftDown_Test7)
		{
			// TODO: Your test code here
			Board testA((std::string)"123456708");
			Board testB(testA.shiftDown());
			Assert::IsTrue(testB.getBoard() == "123456708");
		}
		TEST_METHOD(ShiftDown_Test8)
		{
			// TODO: Your test code here
			Board testA((std::string)"123456780");
			Board testB(testA.shiftDown());
			Assert::IsTrue(testB.getBoard() == "123456780");
		}
	};

	TEST_CLASS(GetTest)
	{
	public:
		TEST_METHOD(GetBoard_Test) {
			Board testB = Board((std::string)"123456780");
			Assert::AreEqual(testB.getBoard(), (std::string)"123456780");
		}
		TEST_METHOD(ConstGetBoard_Test) {
			const Board testB = Board((std::string)"123456780");
			Assert::AreEqual(testB.getBoard(), (std::string)"123456780");
		}
		TEST_METHOD(GetMoves_Test0) {
			Board testB = Board((std::string)"123456780");
			Assert::AreEqual(testB.getMoves(), (std::string)"");
		}
		TEST_METHOD(GetMoves_Test1) {
			Board testB = Board((std::string)"123456780", "udlrudlr");
			Assert::AreEqual(testB.getMoves(), (std::string)"udlrudlr");
		}
		TEST_METHOD(ConstGetMoves_Test0) {
			const Board testB = Board((std::string)"123456780");
			Assert::AreEqual(testB.getMoves(), (std::string)"");
		}
		TEST_METHOD(ConstGetMoves_Test1) {
			const Board testB = Board((std::string)"123456780", "udlrudlr");
			Assert::AreEqual(testB.getMoves(), (std::string)"udlrudlr");
		}
	};
}