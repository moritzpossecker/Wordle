#include <iostream>
#include <array>
#include <vector>
#include <tuple>
#include "functions.h"

auto Parse_Word(std::string goal_word, std::string input_word, int debug) -> std::tuple<std::vector<bool>, std::vector<bool>> {
	
	std::vector<bool> yellow_letters = {false, false, false, false, false};
	std::vector<bool> green_letters = {false, false, false, false, false};
	std::vector<std::string> return_vector(5);

	for (int i = 0; i < goal_word.length(); i++){
		//Parse the yellow letters
		for (int j = 0; j < goal_word.length(); j++){
			if (goal_word[i] == goal_word[j] && goal_word[i] != input_word[i])
			{
				yellow_letters[j] = true;
			}
		}
		//Parse the green letters
		if (input_word[i] == goal_word[i]) {green_letters[i] = true;}
	}
	if (debug == 1) {
		std::cout << " " << std::endl;
		std::cout << "Yellow Letters: " << std::endl;	
		for (int i = 0; i < yellow_letters.size(); i++){
			if (yellow_letters[i] == true) { std::cout << "true" << std::endl;}
			else if (yellow_letters[i] == false) {std::cout << "false" << std::endl;}
			else {std::cout << "ERROR: neither true or false?" << std::endl;}
		}
		std::cout << " " << std::endl;
		std::cout << "Green Letters: " << std::endl;
		for (int i = 0; i < yellow_letters.size(); i++) {
			if (green_letters[i] == true) { std::cout << "true" << std::endl;}
			else if (green_letters[i] == false) {std::cout << "false" << std::endl;}
			else {std::cout << "ERROR: neither true or false?" << std::endl;}
		}
	}

	//Adds the parsed letters to a vector
//	for (int i = 0; i < input_word.size(); i++){
//		std::cout << "Input Letter" << input_word[i] << std::endl;
//		if (yellow_letters[i] == true) {return_vector[i] = "[*";}
//		else if (green_letters[i] == true) {return_vector[i] = "[!" + input_word[i];}
//		else {return_vector[i] = input_word[i];}
//
//		if (debug == true) {std::cout << return_vector[i] << std::endl;}
//	}
	
	return { yellow_letters, green_letters};

}

void blit(std::vector<std::vector<char>> guess_vector, std::vector<std::vector<bool>> yellow_letter_vector, std::vector<std::vector<bool>> green_letter_vector) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			std::cout << "[" << guess_vector[i][j];
			if (green_letter_vector[i][j] == true) {std::cout << "!";}
			else if (yellow_letter_vector[i][j] == true) {std::cout << "*";}
			std::cout << "]";
			if (j == 4) {std::cout << "\n";}
		}
	}
}
