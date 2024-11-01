#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6.2it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ArrayTests
{
    TEST_CLASS(ArrayTests)
    {
    public:

        TEST_METHOD(TestSum)
        {
            int a[] = { 1, 2, 3, 4, 5 };
            int size = 5;
            int expectedSum = 15;
            Assert::AreEqual(expectedSum, Sum(a, size));
        }

        TEST_METHOD(TestAverageOdd_WithOddNumbers)
        {
            int a[] = { 1, 2, 3, 4, 5 };
            int size = 5;
            double expectedAverage = 3.0; // сер арифм непарних чисел (1 + 3 + 5) / 3
            Assert::AreEqual(expectedAverage, AverageOdd(a, size), 0.001);
        }

        TEST_METHOD(TestAverageOdd_NoOddNumbers)
        {
            int a[] = { 2, 4, 6, 8 };
            int size = 4;
            double expectedAverage = 0.0; // жодного непарного числа
            Assert::AreEqual(expectedAverage, AverageOdd(a, size), 0.001);
        }
    };
}
