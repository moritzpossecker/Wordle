#ifdef CLASSES
#define CLASSES

#include <iostream>

class Letter
{
	private:
		char character;
		bool isyellow;
		bool isgreen;

	public
		void Create_Letter(char letter, bool IsYellow, bool IsGreen);

		void Print_Letter(Letter input_letter);
};

#endif
