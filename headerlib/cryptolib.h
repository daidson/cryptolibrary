#include<stdio.h>
#include<windows.h>

// exercise one                    //
// encrypt a message and print it. //
// this is based on ceaser cypher. //
int caesarEncrypt()
{
    char message[255], ch;
	int i, key;
	
	printf("Entre com o texto a criptografar: ");
	fgets(message, 255, stdin);
	printf("Entre com a chave: ");
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
	
	printf("Mensagem cifrada: %s", message);
	getchar();
	printf("\n");
	
	return 0;
}

// exercise two                    //
// decrypt a message and print it. //
// this is based on ceaser cypher. //
int caesarDecrypt()
{
    char message[255], ch;
	int i, key;
	
	printf("Entre com uma mensagem para ser decriptografada: ");
	fgets(message, 255, stdin);
	printf("Entre com a chave: ");
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
	
	printf("Mensagem decriptografada: %s", message);
	getchar();
	printf("\n");
	
	return 0;
}