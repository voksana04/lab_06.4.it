#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\admin\source\repos\Project_6.4_it\Project_6.4_it\lab_6.4.it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:
        TEST_METHOD(TestSumNegativeElements)
        {
            double arr[] = { -2.5, 0, 3.7, 1, -4.2, 6.3 };
            int n = sizeof(arr) / sizeof(arr[0]);
            double sumNeg = sumNegativeElements(arr, n);
            Assert::AreEqual(-6.7, sumNeg, 0.01); //  -2.5 + (-4.2) = -6.7
        }

        TEST_METHOD(TestFindMaxIndex)
        {
            double arr[] = { -2.5, 0, 3.7, 1, -4.2, 6.3 };
            int n = sizeof(arr) / sizeof(arr[0]);
            int maxIndex = findMaxIndex(arr, n);
            Assert::AreEqual(5, maxIndex); // 6.3 is the max, at index 5
        }

        TEST_METHOD(TestFindMinIndex)
        {
            double arr[] = { -2.5, 0, 3.7, 1, -4.2, 6.3 };
            int n = sizeof(arr) / sizeof(arr[0]);
            int minIndex = findMinIndex(arr, n);
            Assert::AreEqual(4, minIndex); // -4.2 is the min, at index 4
        }

        TEST_METHOD(TestProductBetweenMinMax)
        {
            double arr[] = { -2.5, 0, 3.7, 1, -4.2, 6.3 };
            int n = sizeof(arr) / sizeof(arr[0]);
            double product = productBetweenMinMax(arr, n);
            Assert::AreEqual(1.0, product, 0.01); // No elements between -4.2 and 6.3
        }

        TEST_METHOD(TestSortEvenElements)
        {
            double arr[] = { 4.0, 3.5, 2.0, 1.0, 6.0 };
            int n = sizeof(arr) / sizeof(arr[0]);
            sortEvenElements(arr, n);
            double expectedArr[] = { 2.0, 3.5, 4.0, 1.0, 6.0 }; // Even elements are sorted: 2.0, 4.0, 6.0
            for (int i = 0; i < n; i++) {
                Assert::AreEqual(expectedArr[i], arr[i]);
            }
        }
    };
}
