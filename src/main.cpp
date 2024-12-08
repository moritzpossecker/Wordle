#include <iostream>
#include <vector>
#include "functions.h"
#include "classes.h"

std::vector<Letter> Wordle_Line(std::string input_word, std::string goal_word);

int main()
{
	Letter test_letter;
	test_letter.Create_Letter('a', true, false);
	test_letter.Print_Letter(test_letter);

//	std::vector<Letter> test_line;
//	test_line.reserve(5);
//	test_line = Wordle_Line("later", "latte");
}
