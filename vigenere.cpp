#include "ascii.h"
#include "vigenere.h"
#include <string>
#include <iostream>
#include "caesar.h"


std::string encryptVigenere(std::string plaintext, std::string keyword) {
    std::string result = "";
    int keywordIndex = 0;
    for (char c : plaintext) {
        if (isLowerCase(c)) {
            result += shiftChar(c, keyword[keywordIndex] - 'a');
            keywordIndex = (keywordIndex + 1) % keyword.size();
        }
        else if (isUpperCase(c)) {
            result += shiftChar(c, keyword[keywordIndex] - 'A');
            keywordIndex = (keywordIndex + 1) % keyword.size();
        }
        else {
            result += c;
        }
    }
    return result;
}

