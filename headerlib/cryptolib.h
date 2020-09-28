// || Add libraries here				    //
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>
#include<windows.h>
#include<math.h>
#include<conio.h>

// || Add functions here				    //
#include "../functions/caesarEncrypt.c"
#include "../functions/caesarDecrypt.c"
#include "../functions/alphabeticCipher.c"
#include "../functions/playfairCipher.c"
#include "../functions/polyalphabeticCipher.c"

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
// || this is based on ceaser cypher. 		//
int caesarEncrypt();

// || exercise two                   		//
// || decrypt a message and print it.		//
// || this is based on ceaser cypher. 		//
int caesarDecrypt();

// || exercise three                   		//
// || make an alphabetic substitution.		//
// || this is based on alphabetic cypher. 	//
int alphabeticCipher();

// || exercise four                   		//
// || make a cryptographic matrix.  		//
// || this is based on playfair cypher. 	//
int playfairCipher();


int polyalphabeticCipher();

#endif