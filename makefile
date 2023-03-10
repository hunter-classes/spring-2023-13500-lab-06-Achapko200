main: main.o ascii.o vigenere.o decrypt.o caesar.o
	g++ -o main main.o ascii.o vigenere.o decrypt.o caesar.o

tests: tests.o ascii.o
	g++ -o tests tests.o ascii.o vigenere.o decrypt.o caesar.o

ascii.o: ascii.cpp ascii.o
g++ -std=c++11 -c ascii.cpp

caesar.o: caesar.cpp caesar.h
g++ -std=c++11 -c caesar.cpp

vigenere.o: vigenere.cpp vigenere.h
g++ -std=c++11 -c vigenere.cpp

decrypt.o: decrypt.cpp decrypt.h
g++ -std=c++11 -c decrypt.cpp

main.o: main.cpp ascii.h vigenere.h decrypt.h caesar.h
g++ -std=c++11 -c main.cpp


tests.o: tests.cpp doctest.h ascii.h vigenere.h decrypt.h caesar.h
g++ -c -std=c++11 test.cpp

test: main
	./main

clean:
	rm -f main.o ascii.o tests.o vigenere.o decrypt.o ceaser.o