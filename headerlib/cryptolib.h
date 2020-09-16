// || Add libraries here				    //
#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include "../functions/caesarEncrypt.c"
#include "../functions/caesarDecrypt.c"


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

#endif