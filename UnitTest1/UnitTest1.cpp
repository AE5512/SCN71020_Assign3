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
		
		TEST_METHOD(ResultWasNotInvalid)
		{
			char* player1 = "paper";
			char* player2 = "rock";
			char* result = gameFunction(player1, player2);
			
			Assert::AreNotEqual("Invalid", result);

		}
		TEST_METHOD(ArgumentInvalid)
		{
			char* player1 = "Makes no";
			char* player2 = "Scents";
			char* result = gameFunction(player1, player2);

			Assert::AreEqual("Invalid", result);

		}
		TEST_METHOD(PaperBeatsRock)
		{
			char* player1 = "paper";
			char* player2 = "rock";
			char* result = gameFunction(player1, player2);

			Assert::AreEqual("Player1", result);

		}
		TEST_METHOD(RockBeatsScissors)
		{
			char* player1 = "scissors";
			char* player2 = "rock";
			char* result = gameFunction(player1, player2);

			Assert::AreEqual("Player2", result);

		}
		TEST_METHOD(ScissorsBeatsPaper)
		{
			char* player1 = "paper";
			char* player2 = "scissors";
			char* result = gameFunction(player1, player2);

			Assert::AreEqual("Player2", result);

		}
		TEST_METHOD(Draw)
		{
			char* player1 = "rock";
			char* player2 = "rock";
			char* result = gameFunction(player1, player2);

			Assert::AreEqual("Draw", result);

		}
	};
}
