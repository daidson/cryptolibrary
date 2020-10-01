void railfenceEncrypt(int key, const char *plaintext, char *ciphertext);
void railfenceDecrypt(int key, const char *ciphertext, char *plaintext);

int productCipher()
{
    char message[255], alphakey[255], k[255], ciphertext[255], deciphertext[255];
    int lenm, lenk, i;
    int key;

    int j = 0;

    printf("\nEntre com a chave alfabetica: \n");
    gets(alphakey);
    printf("\nEntre com o texto a ser criptografado: \n");
    gets(message);

    lenm = strlen(message);
    lenk = strlen(alphakey);

    // encrypting with polyalphabetic

    for (i = 0; i < lenm; i++, j++)
    {
        if (j == lenk)
        {
            j = 0;
        }
        k[i] = alphakey[j];
    }

    for (i = 0; i < lenm; i++)
    {
        ciphertext[i] = ((toupper(message[i]) + toupper(k[i])) % 26) + 'B';
    }
    ciphertext[i] = '\0';

    printf("\nTexto criptografado: %s\n", ciphertext);

    // encrypting with transposition

    char *transpositioncipher = malloc(strlen(ciphertext) + 1);
    char *result = malloc(strlen(ciphertext) + 1);

    printf("\nEntre com a chave de transposicao: \n");
    scanf("%d", &key);

    railfenceEncrypt(key, ciphertext, transpositioncipher);

    printf("\nMensagem original: %s\n", message);
    printf("Mensagem criptografada com cifra polialfabetica: %s\n", ciphertext);
    printf("Texto criptografado com produto: %s\n", transpositioncipher);

    // decrypting with transposition

    railfenceDecrypt(key, transpositioncipher, result);

    // decrypting with polyalphabetic

    for (i = 0; i < lenm; i++)
    {
        deciphertext[i] = (((toupper(result[i]) - toupper(k[i])) + 25) % 26) + 'A';
    }
    deciphertext[i] = '\0';

    printf("\nMensagem descriptografada: %s\n", deciphertext);

    getchar();
    
    return 0;
}