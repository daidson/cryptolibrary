int desEncryption()
{
    int i, cnt = 0;
    int p16[16] = {9, 10, 11, 12, 13, 14, 15, 16, 1, 2, 3, 4, 5, 6, 7, 8};

    char input[17], temp[17];
    //k1, k2 are for storing interim keys
    //p8 and p16 are for storing permutation key

    //Read 10 bits from user...
    printf("Entre com o input de 16 bits para criptografar: ");
    scanf("%s", input);
    input[16] = '\0';

    //Applying p16...
    for (i = 0; i < 16; i++)
    {
        cnt = p16[i];
        temp[i] = input[cnt - 1];
    }
    temp[i] = '\0';

    printf("\nSua chave de 16 bits eh: ");
    printf("| ");
    for (i = 0; i < 16; i++)
    {
        printf("%d |", p16[i]);
    }

    printf("\nBits depois de passarem por 16 alocacoes: ");
    puts(temp);

    //Performing LS-1 on first half of temp
    for (i = 0; i < 8; i++)
    {
        if (i == 7)
            temp[i] = temp[0];
        else
            temp[i] = temp[i + 1];
    }
    //Performing LS-1 on second half of temp
    for (i = 8; i < 16; i++)
    {
        if (i == 15)
            temp[i] = temp[8];
        else
            temp[i] = temp[i + 1];
    }
    printf("Saida final: ");
    puts(temp);

    getchar();

    return 0;
}