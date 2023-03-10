#pragma once 
// A helper function to shift one character by the corresponding
// character of the keyword
char shiftChar(char c, char keywordChar);

// Vigenere cipher encryption
std::string encryptVigenere(std::string plaintext, std::string keyword);
