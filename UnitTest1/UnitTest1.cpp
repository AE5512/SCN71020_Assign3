#include "pch.h"
#include "CppUnitTest.h"

// Tell compiler to use C
extern "C" char* gameFunction(char* player1input, char* player2input);

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
			char* result = gameFunction(player1, player2);
			
			Assert::AreNotEqual("invalid", result);

		}
	};
}
