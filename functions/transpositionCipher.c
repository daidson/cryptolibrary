void railfenceEncrypt(int key, const char *plaintext, char *ciphertext);
void railfenceDecrypt(int key, const char *ciphertext, char *plaintext);

int transpositionCipher(){
    char msg[1024];
    // int key;

    printf("\nEntre com o texto a ser criptografado: \n");
    gets(msg);

    char *ciphertext = malloc(strlen(msg)+1);
    char *result = malloc(strlen(msg)+1);

    // printf("\nEntre com a chave: \n");
    // scanf("%d", &key);
    
    railfenceEncrypt(3, msg, ciphertext);
    railfenceDecrypt(3, ciphertext, result);

    printf("Mensagem original: %s\n", msg);
    printf("\nTexto criptografado: %s\n", ciphertext);
    printf("\nTexto descriptografado: %s\n", result);
    
    free(ciphertext);
    free(result);
    
    return 0;
}

void railfenceEncrypt(int key, const char *plaintext, char *ciphertext){
    int line, i, skip, length = strlen(plaintext), j=0,k=0;    
    for(line = 0; line < key-1; line++){
        skip = 2*(key - line - 1); 
        k=0;
        for(i = line; i < length;){
            ciphertext[j] = plaintext[i];
            if((line==0) || (k%2 == 0)) i+=skip;
            else i+=2*(key-1) - skip;  
            j++;   k++;
        }
    }
    for(i=line; i<length; i+=2*(key-1)) ciphertext[j++] = plaintext[i];
    ciphertext[j] = '\0';
}

void railfenceDecrypt(int key, const char *ciphertext, char *plaintext){
    int i, length = strlen(ciphertext), skip, line, j, k=0;
    for(line=0; line<key-1; line++){
        skip=2*(key-line-1);	  
        j=0;
        for(i=line; i<length;){
            plaintext[i] = ciphertext[k++];
            if((line==0) || (j%2 == 0)) i+=skip;
            else i+=2*(key-1) - skip;  
            j++;        
        }
    }
    for(i=line; i<length; i+=2*(key-1)) plaintext[i] = ciphertext[k++];
    plaintext[length] = '\0';  
}