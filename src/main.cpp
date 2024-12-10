#include <iostream>
#include <vector>
#include <cctype>
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

std::vector<Letter> Wordle_Line(std::string input_word, std::string goal_word);

int main()
{	
	std::vector<std::vector<Letter>> wordle_lines(5, std::vector<Letter>(5));

	std::string goal_word = "queer";
	int turns = 0;
	bool iswin = false;
	while (turns <= 4  && iswin == false)
	{
		std::cout << turns << std::endl;
		std::string input_line;
		std::cout << "Please input a guess: " << std::endl;
	
		//get input and make all of the characters of the string lowercase
		std::cin >> input_line;
		if (input_line.size() != goal_word.size())
		{
			std::cout << "Please input exactly " << goal_word.size() << " letters";
			continue;
		}
		
		std::cout << "\n";
		
		for (int i = 0; i < input_line.size(); i++)
		{
			input_line[i] = tolower(input_line[i]);
		}
		
		//passes the inputted word through the wordle line function
		wordle_lines[turns] = Wordle_Line(input_line, goal_word);
		
		//prints the wordle lines
		for (int i = 0; i < goal_word.size(); i++)
		{
			for (int j = 0; j < goal_word.size(); j++)
			{
				if (wordle_lines[i].empty() == true) {std::cout << "[]";}
				else
				{
					wordle_lines[i][j].Print_Letter(wordle_lines[i][j]);
				}
			}

			std::cout << "\n";
		}
		
		//win/lose condition check
		//iterates the turns counter
		if (input_line == goal_word)
		{
			iswin = true;
			std::cout << "~~Congratulations, you won!~~" << std::endl;
			std::cout << "The word was: " << goal_word << std::endl;
			if (turns < 1) { std::cout << "You guessed it in " << turns + 1 << " try!"; }
			else { std::cout << "You guessed it in " << turns + 1 << " tries!"; }
		}

		else { turns += 1; }

		if (turns > 4)
		{
			std::cout << "Sorry, you lost!" << std::endl;
			std::cout << "The word was: " << goal_word << std::endl;
		}
	}
}
