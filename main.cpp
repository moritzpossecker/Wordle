#include <iostream>
#include <array>
#include <vector>
#include <tuple>
#include "functions.h"

std::string goal_word = "later";
std::string input_word;
bool run = true;

std::vector<std::vector<char>> guesses_vector = {
		{'A', 'B', 'C', 'D', 'E'},
		{'F', 'G', 'H', 'I', 'J'},
		{'K', 'L', 'M', 'N', 'O'},
		{'P', 'Q', 'R', 'S', 'T'},
		{'U', 'V', 'W', 'X', 'Y'},
		{'Z', 'a', 'b', 'c', 'd'}
};

std::vector<std::vector<bool>> yellow_letters(25);

std::vector<std::vector<bool>> green_letters = {
	{false, false, true, true, true},
	{true, true, true, true, true},
	{true, true, true, true, true},
	{true, true, true, true, true},
	{true, true, true, true, true}
};

auto Parse_Word(std::string goal_word, std::string input_word, int debug) -> std::tuple<std::vector<bool>, std::vector<bool>>;
void blit(std::vector<std::vector<char>> guess_vector, std::vector<std::vector<bool>> yellow_letter_vector, std::vector<std::vector<bool>> green_letter_vector);
		
int main()
{
//	blit(guesses_vector, yellow_letters, green_letters);
	while (run){
//		std::cout << "Wordle" << std::endl;
//		std::cout << "[] [] [] [] []" << std::endl;
		std::cout << goal_word << std::endl;
		std::cin >> input_word;
		auto [y, g] = Parse_Word(goal_word, input_word, 0);
		std::vector<bool> Y = y;
		for (int i = 0; i < 5; i++) {std::cout << y[i];}
		std::cout << "\n";
		for (int i = 0; i < 5; i++) {std::cout << g[i];}
		std::cout << "\n";
		yellow_letters.push_back(y);
		yellow_letters.size();
//		for (int i = 0; i < 5; i++) {std::cout << yellow_letters[0][i] << std::endl;}
//		blit(guesses_vector, yellow_letters, green_letters);
	}
	return 0;
}
