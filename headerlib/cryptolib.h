// || Add libraries here				    //
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>
#include<windows.h>
#include<math.h>
#include<conio.h>
#include <ctype.h>

// || Add functions here				    //
#include "../functions/caesarEncrypt.c"
#include "../functions/caesarDecrypt.c"
#include "../functions/alphabeticCipher.c"
#include "../functions/playfairCipher.c"
#include "../functions/polyalphabeticCipher.c"
#include "../functions/transpositionCipher.c"
#include "../functions/productCipher.c"

// || Add definitions here				    //
#define MAX_STR_LEN 1000
#define MAX_CHAR 26

// || Header guard protection			    //
#ifndef HEADER_FILE
#define HEADER_FILE

// || From this point onwards, functions    //
// ||    !FUNCTION STATEMENTS ONLY!         //

// || exercise one                    		//
// || encrypt a message and print it.		//
// || this is based on ceaser cipher. 		//
int caesarEncrypt();

// || exercise two                   		//
// || decrypt a message and print it.		//
// || this is based on ceaser cipher. 		//
int caesarDecrypt();

// || exercise three                   		//
// || make an alphabetic substitution.		//
// || this is based on alphabetic cipher. 	//
int alphabeticCipher();

// || exercise four                   		//
// || make a cryptographic matrix.  		//
// || this is based on playfair cipher. 	//
int playfairCipher();

// || exercise five                   		//
// || make a polyalphabetic cipher.  		//
// || as many levels of alphabetical cipher.//
int polyalphabeticCipher();

// || exercise six                   		//
// || make a transposition cipher.  		//
// || based on the rail fence algorithm.    //
int transpositionCipher();

// || exercise seven                   		//
// || make a product cipher using two other.//
// || use polyalphabetic and transposition. //
int productCipher();

#endif