#ifdef FUNCTIONS
#define FUNCTIONS
	
#include <iostream>
#include <vector>
#include <array>
#include <tuple>

auto Parse_Word(std::string goal_word, std::string input_word, int debug) -> std::tuple<std::vector<bool>, std::vector<bool>>;
void blit(std::vector<std::vector<char>> guess_vector, std::vector<std::vector<bool>> yellow_letter_vector, std::vector<std::vector<bool>> green_letter_vector);
#endif
