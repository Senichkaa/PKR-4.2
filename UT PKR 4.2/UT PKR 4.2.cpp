#include "pch.h"
#include "CppUnitTest.h"
#include "../PKR 4.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UTPKR42
{
	TEST_CLASS(UTPKR42)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string ss= "kick";
			int result = count(ss);
			Assert::AreEqual(1, count(ss));
		}
	};
}
