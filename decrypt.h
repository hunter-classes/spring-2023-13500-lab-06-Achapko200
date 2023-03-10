#ifndef DECRYPT_H
#define DECRYPT_H

#include <string>

std::string decryptCaesar(std::string ciphertext, int rshift);
std::string decryptVigenere(std::string ciphertext, std::string keyword);

#endif
