#include <iostream>
#include <string>
#ifndef HANGMAN_H_INCLUDED
#define HANGMAN_H_INCLUDED

std::string hide_word(std::string mystery_word);
std::string mysteryCapital(std::string mystery_word);
bool isUserInputValid(std::string userInput);

#endif // HANGMAN_H_INCLUDED
