#ifndef HEADER
#define HEADER

#include <iostream>
#include <fstream>
#include <vector>
#include <cctype>
#include <stdlib.h>
#include <time.h>

// ANSI color codes
const std::string YELLOW = "\033[33m";
const std::string GREEN = "\033[32m";
const std::string DEFAULT = "\033[0m";

class Letter
{
	public:
		char character;
		bool isyellow;
		bool isgreen;

	public:
		void Create_Letter(char letter, bool IsYellow, bool IsGreen);

		void Print_Letter(Letter input_letter);
};

std::vector<Letter> Wordle_Line(std::string input_word, std::string goal_word);

#endif
