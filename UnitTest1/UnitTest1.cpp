#include "pch.h"
#include "CppUnitTest.h"

// Tell compiler to use C
extern "C" char gameResult(char player1, char player2);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(resultWasNotInvalid)
		{
			char* player1 = "paper";
			char* player2 = "rock";
			char result = gameResult(*player1, *player2);
			
			Assert::AreNotEqual("invalid", &result);

		}
	};
}
