#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5_5/lab_5_5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
        TEST_METHOD(Bin1)
        {
            int number = 10000;
            string binaryRepresentation = Bin(number); // Capture the result
            Assert::AreEqual(binaryRepresentation.c_str(), "10011100010000"); // Correct expected output without spaces
        }

        TEST_METHOD(Oct1)
        {
            int number = 10000;
            string octalRepresentation = Oct(number); // Capture the result
            Assert::AreEqual(octalRepresentation.c_str(), "23420"); // Correct expected output without spaces
        }
	};
}
