#include "stdafx.h"
#include "CppUnitTest.h"
#include "../ConsoleApplication1/House.h"
#include "../ConsoleApplication1/Room.h"
#include "../ConsoleApplication1/RectRoom.h"
#include "../ConsoleApplication1/CurcRoom.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace UnitTest1
{		
	TEST_CLASS(HouseTest)
	{
	public:
		
		TEST_METHOD(TestAddRooms)
		{
			RectRoom *A = new RectRoom(1, 1, 3, 5);
			RectRoom *B = new RectRoom(2, 2, 6, 8);
			RectRoom *C = new RectRoom(4, 4, 8, 7);
			House H;
			Assert::IsTrue(H.isEmpty());
			H.addRoom(A);
			Assert::IsFalse(H.isEmpty());
			H.addRoom(B);
			H.addRoom(C);
			Assert::AreEqual((int)H.getRoomCount(), 3);
		}

		TEST_METHOD(TestDeleteRooms)
		{
			RectRoom *A = new RectRoom(1, 1, 3, 5);
			RectRoom *B = new RectRoom(2, 2, 6, 8);
			RectRoom *C = new RectRoom(4, 4, 8, 7);
			House H;
			H.addRoom(A);
			H.addRoom(B);
			H.addRoom(C);
			Assert::AreEqual((int)H.getRoomCount(), 3);
			H.deleteRoom(2);
			Assert::AreEqual((int)H.getRoomCount(), 2);
		}

		TEST_METHOD(TestCalculateSquare)
		{
			RectRoom *A = new RectRoom(1, 1, 3, 5);
			RectRoom *B = new RectRoom(2, 2, 6, 8);
			House H;
			H.addRoom(A);
			H.addRoom(B);
			Assert::AreEqual(H.getSummurySquare(), 63.0);
		}

		TEST_METHOD(TestClearAll)
		{
			RectRoom *A = new RectRoom(1, 1, 3, 5);
			RectRoom *B = new RectRoom(2, 2, 6, 8);
			House H;
			H.addRoom(A);
			H.addRoom(B);
			Assert::IsFalse(H.isEmpty());
			H.ClearAll();
			Assert::IsTrue(H.isEmpty());
		}
	};
}