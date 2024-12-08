#include <iostream>
#include <vector>
#include "functions.h"
#include "classes.h"

std::vector<Letter> Wordle_Line(std::string input_word, std::string goal_word);
{
	std::vector<Letter> return_vector(5);

	for (int i = 0; i < goal_word.size(); i++)
	{
		for (int j = 0; j < goal_word.size; j++) 
		{
			if (input_word[i] == goal_word[j] && goal_word[i] != input_word[j])
			{
				return_vector[i] = Letter temp_letter.Create_Letter(input_word[i], true, false);
			}
		}

		if (input_word[i] == goal_word[i])
		{
			return_vector[i] = Letter temp_letter.Create_Letter(input_word[i], false, true);
		}
	}
}

void Letters::Create_Letter(char Letter, bool IsYellow, bool IsGreen)
{
	character = Letter;
	isyellow = IsYellow;
	isgreen = IsGreen;
}	

void Letters::Print_Letter(Letter input_letter)
{
	std::cout << "[" << input_letter.character;
	if (input_letter.isyellow) {std::cout << "*";}
	else if (input_letter.isgreen) {std::cout << "!";}
	std::cout << "]";
}
