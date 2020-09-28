int polyalphabeticCipher()
{
    char msg[30], key[30], k[20], ct[20], pt[20];
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
        ct[i] = ((msg[i] + k[i]) % 26) + 'A';
    }
    ct[i] = '\0';
    for (i = 0; i < lenm; i++)
    {
        pt[i] = (((ct[i] - k[i]) + 26) % 26) + 'A';
    }
    pt[i] = '\0';
    printf("\nTexto criptografado: %s\n", ct);
    printf("\nMensagem descriptografada: %s\n", pt);
    
    return 0;
}