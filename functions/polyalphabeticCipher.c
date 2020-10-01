int polyalphabeticCipher()
{
    char msg[255], key[255], k[255], ct[255], pt[255];
    int lenm, lenk, i;
    int j = 0;

    printf("\nEntre com a chave: \n");
    gets(key);
    printf("\nEntre com o texto a ser criptografado: \n");
    gets(msg);

    lenm = strlen(msg);
    lenk = strlen(key);

    for (i = 0; i < lenm; i++, j++)
    {
        if (j == lenk)
        {
            j = 0;
        }
        k[i] = key[j];
    }
    for (i = 0; i < lenm; i++)
    {
        ct[i] = ((toupper(msg[i]) + toupper(k[i])) % 26) + 'B';
    }
    ct[i] = '\0';
    for (i = 0; i < lenm; i++)
    {
        pt[i] = (((toupper(ct[i]) - toupper(k[i])) + 25) % 26) + 'A';
    }
    pt[i] = '\0';
    printf("\nTexto criptografado: %s\n", ct);
    printf("\nMensagem descriptografada: %s\n", pt);
    
    return 0;
}