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
			CurcRoom *D = new CurcRoom(3, 3, 5);
			CurcRoom *E = new CurcRoom(5, 5, 4);
			House H;
			Assert::IsTrue(H.isEmpty());
			H.addRoom(A);
			Assert::IsFalse(H.isEmpty());
			H.addRoom(B);
			H.addRoom(C);
			H.addRoom(D);
			H.addRoom(E);
			Assert::AreEqual((int)H.getRoomCount(), 5);
		}

		TEST_METHOD(TestDeleteRooms)
		{
			RectRoom *A = new RectRoom(1, 1, 3, 5);
			RectRoom *B = new RectRoom(2, 2, 6, 8);
			RectRoom *C = new RectRoom(4, 4, 8, 7);
			CurcRoom *D = new CurcRoom(3, 3, 5);
			CurcRoom *E = new CurcRoom(5, 5, 4);
			House H;
			H.addRoom(A);
			H.addRoom(B);
			H.addRoom(C);
			H.addRoom(D);
			H.addRoom(E);
			Assert::AreEqual((int)H.getRoomCount(), 5);
			H.deleteRoom(2);
			Assert::AreEqual((int)H.getRoomCount(), 4);
		}

		TEST_METHOD(TestCalculateSquare)
		{
			RectRoom *A = new RectRoom(1, 1, 3, 5);
			RectRoom *B = new RectRoom(2, 2, 6, 8);
			//CurcRoom *D = new CurcRoom(3, 3, 10);
			House H;
			H.addRoom(A);
			H.addRoom(B);
			//H.addRoom(D);
			Assert::AreEqual(H.getSummurySquare(), 63.0);
		}

		TEST_METHOD(TestClearAll)
		{
			RectRoom *A = new RectRoom(1, 1, 3, 5);
			RectRoom *B = new RectRoom(2, 2, 6, 8);
			CurcRoom *D = new CurcRoom(3, 3, 10);
			House H;
			H.addRoom(A);
			H.addRoom(B);
			H.addRoom(D);
			Assert::IsFalse(H.isEmpty());
			H.ClearAll();
			Assert::IsTrue(H.isEmpty());
		}
	};
}