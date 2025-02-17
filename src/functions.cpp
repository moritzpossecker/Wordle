#include <iostream>
#include <vector>
#include "include/header.h"

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

void Letter::Create_Letter(char Letter, bool IsYellow, bool IsGreen)
{
	character = Letter;
	isyellow = IsYellow;
	isgreen = IsGreen;
}	

void Letter::Print_Letter(Letter input_letter)
{
    std::cout << "[";
    
    // Apply color based on letter properties
    if (input_letter.isyellow) {
        std::cout << YELLOW << input_letter.character << DEFAULT;
    } else if (input_letter.isgreen) {
        std::cout << GREEN << input_letter.character << DEFAULT;
    } else {
        std::cout << input_letter.character;
    }

    std::cout << "]";
}

//function that returns a vector of letters that are marked with yellow, green, or neither
std::vector<Letter> Wordle_Line(std::string input_word, std::string goal_word)
{
	std::vector<Letter> return_vector(5);

	for (int i = 0; i < goal_word.size(); i++)
	{
		return_vector[i].character = input_word[i];
	}	

	for (int i = 0; i < goal_word.size(); i++)
	{	
		for (int j = 0; j < goal_word.size(); j++) 
		{
			if (input_word[i] == goal_word[j] && goal_word[i] != input_word[j])
			{
				return_vector[i].isyellow = true;
				return_vector[i].isgreen = false;
			}
		}

		if (input_word[i] == goal_word[i])
		{
			return_vector[i].isyellow = false;
			return_vector[i].isgreen = true;
		}
	}

	return return_vector;
}

