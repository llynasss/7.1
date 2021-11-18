#include "pch.h"
#include "CppUnitTest.h"
#include "../7.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ut71
{
	TEST_CLASS(ut71)
	{
	public:
		
		TEST_METHOD(TestMethod1){
		
		int s = 0;

		int k = 0;

		int** a = new int* [2];

		for (int i = 0; i < 2; i++)

		a[i] = new int[2];

		a[0][1] = -1;

		a[0][0] = 2;

		a[1][0] = 3;

		a[1][1] = 0;

		Calc(a, 2, 2, s, k);

		Assert::AreEqual(3, k);
		}
	};
}
