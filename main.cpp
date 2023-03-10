#include <iostream>
#include <string>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

int main() {

    std::string plaintext = "This is a secret message!";
    std::string keyword = "secret";
    int rshift = 5;

    // Encrypt using Caesar cipher
    std::string caesar_cipher = encryptCaesar(plaintext, rshift);
    std::cout << "Caesar ciphertext: " << caesar_cipher << std::endl;

    // Decrypt Caesar ciphertext
    std::string caesar_plain = decryptCaesar(caesar_cipher, rshift);
    std::cout << "Caesar plaintext: " << caesar_plain << std::endl;

    // Encrypt using Vigenere cipher
    std::string vigenere_cipher = encryptVigenere(plaintext, keyword);
    std::cout << "Vigenere ciphertext: " << vigenere_cipher << std::endl;

    // Decrypt Vigenere ciphertext

    std::string vigenere_plain = decryptVigenere(vigenere_cipher, keyword);
    std::cout << "Vigenere plaintext: " << vigenere_plain << std::endl;


    return 0;
}
