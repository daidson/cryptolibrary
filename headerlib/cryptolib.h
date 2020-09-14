// || Add libraries here				    //
#include<stdlib.h>
#include<stdio.h>
#include<windows.h>

// || From this point onwards, functions    //

// || exercise one                    		//
// || encrypt a message and print it.		//
// || this is based on ceaser cypher. 		//
int caesarEncrypt()
{
    char message[255], ch;
	int i, key;
	
	printf("Input the text to be encrypted: ");
	fgets(message, 255, stdin);
	printf("Input the key for encryption: ");
	scanf("%d", &key);
	
	for(i = 0; message[i] != '\0'; ++i){
		ch = message[i];
		
		if(ch >= 'a' && ch <= 'z'){
			ch = ch + key;
			
			if(ch > 'z'){
				ch = ch - 'z' + 'a' - 1;
			}
			
			message[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch + key;
			
			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
			}
			
			message[i] = ch;
		}
	}
	
	printf("Encrypted message: %s", message);
	getchar();
	printf("\n");
	
	return 0;
}

// || exercise two                   		//
// || decrypt a message and print it.		//
// || this is based on ceaser cypher. 		//
int caesarDecrypt()
{
    char message[255], ch;
	int i, key;
	
	printf("Input the message to be decrypted: ");
	fgets(message, 255, stdin);
	printf("Input the key for decryption: ");
	scanf("%d", &key);
	
	for(i = 0; message[i] != '\0'; ++i){
		ch = message[i];
		
		if(ch >= 'a' && ch <= 'z'){
			ch = ch - key;
			
			if(ch < 'a'){
				ch = ch + 'z' - 'a' + 1;
			}
			
			message[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch - key;
			
			if(ch < 'A'){
				ch = ch + 'Z' - 'A' + 1;
			}
			
			message[i] = ch;
		}
	}
	
	printf("Decrypted message: %s", message);
	getchar();
	printf("\n");
	
	return 0;
}