#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "decrypt.h"
#include "caesar.h"
#include "vigenere.h"

TEST_CASE(CaesarCipher, Encryption) {
  std::string plaintext = "This is a secret message!";
  std::string expected = "ymnx nx f xjhwjy rjxxflj!";
  EXPECT_EQ(encryptCaesar(plaintext, 5), expected);
}

TEST_CASE(CaesarCipher, Decryption) {
  std::string ciphertext = "ymnx nx f xjhwjy rjxxflj!";
  std::string expected = "this is a secret message!";
  EXPECT_EQ(decryptCaesar(ciphertext, 5), expected);
}

TEST_CASE(VigenereCipher, Encryption) {
  std::string plaintext = "This is a secret message!";
  std::string keyword = "secret";
  std::string expected = "ytgrw mw q qswecg pjeiep!";
  EXPECT_EQ(encryptVigenere(plaintext, keyword), expected);
}

TEST_CASE(VigenereCipher, Decryption) {
  sstd::string vigenere_cipher = "Rlkj ml s wgtvxl qgjwtyi!";
    std::string keyword = "secret";
  std::string expected = "this is a secret message!";
  EXPECT_EQ(decryptVigenere(ciphertext, keyword), expected);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

