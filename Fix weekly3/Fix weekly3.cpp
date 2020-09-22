#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>

int guessNumberA = 4;
int guessNumberB = 16;
int guessNumberC = 20;
int number;
int count = 0;
char option = 0;

int main() {
	std::cout << "Welcome to guess the number!" << std::endl;
	std::cout << " " << std::endl;
	std::cout << "A = easy (1-5)" << std::endl;
	std::cout << "B = medium (1-10)" << std::endl;
	std::cout << "C = hard (1-30)" << std::endl;
	std::cout << " " << std::endl;
	std::cout << "What dificulty do you want?" << std::endl;
	std::cin >> option;
	std::cout << " " << std::endl;

	switch (option) {
		case 'A':
			easy();
			break;
		case 'B':
			medium();
			break;
		case 'C':
			hard();
			break;

		default:
			std::cout << "Sorry that is not a dificulty. Try again" << std::endl;
			std::cout << " " << std::endl;
			count++;

	}
}

int easy() {
	
	std::cout << "Easy guess the number between 1-5" << std::endl;
	while (number != guessNumberA) {
		std::cout << "Guess a number" << std::endl;
		std::cin >> number;

		if (number == guessNumberA) {
			std::cout << "Correct!" << std::endl;
		}
		else {
			std::cout << "Wrong! Try again!" << std::endl;
			std::cout << " " << std::endl;
			count++;
		}
		std::cout << "It took you " << count << " times to guess the number" << std::endl;

	}
}

int medium() {
	std::cout << "Medium guess the number between 1-10" << std::endl;
	while (number != guessNumberB) {
		std::cout << "Guess a number" << std::endl;
		std::cin >> number;

		if (number == guessNumberB) {
			std::cout << "Correct!" << std::endl;
		}
		else {
			std::cout << "Wrong! Try again!" << std::endl;
			std::cout << " " << std::endl;
			count++;
		}
		std::cout << "It took you " << count << " times to guess the number" << std::endl;

	}
}

int hard() {
	std::cout << "Hard guess the number between 1-30" << std::endl;
	while (number != guessNumberC) {
		std::cout << "Guess a number" << std::endl;
		std::cin >> number;

		if (number == guessNumberC) {
			std::cout << "Correct!" << std::endl;
		}
		else {
			std::cout << "Wrong! Try again!" << std::endl;
			std::cout << " " << std::endl;
			count++;
		}
		std::cout << "It took you " << count << " times to guess the number" << std::endl;

	}
}