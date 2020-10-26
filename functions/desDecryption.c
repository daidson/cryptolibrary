int desDecryption()
{
    int i, cnt = 0;
    int p16[16] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

    char input[17], temp[17];
    printf("Entre com o input de 16 bits para descriptografar: ");
    scanf("%s", input);
    input[16] = '\0';

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

    for (i = 0; i < 8; i++)
    {
        if (i == 7)
            temp[i] = temp[0];
        else
            temp[i] = temp[i + 1];
    }

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