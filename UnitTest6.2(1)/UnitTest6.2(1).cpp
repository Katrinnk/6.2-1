#include "pch.h"
#include "CppUnitTest.h"
#include "../Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest621
{
	TEST_CLASS(UnitTest621)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int z;
			const int n = 5;
			int a[n] = { 1,2,3,4,5 };
			z = Max(a, n);
			Assert::AreEqual(z, 5);
		}
	};
}
