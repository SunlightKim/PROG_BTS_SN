#ifndef VIGENERE_H_ // include guard
#define VIGENERE_H_

#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "../func/vigenere.c"

// Function prototypes
char* vigenere(char* plaintextVig, char* keyVig);

#endif /* VIGENERE_H_ */