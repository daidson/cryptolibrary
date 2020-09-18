void encrypt(char pt[], char mat[]);
void startMatrix();

int playfairCipher()
{
    char ky[50], pt[100], key[50];
    char m[5][5];
    char ch = 'a';
    int i = 0, j = 0, a = 0, b = 0, temp1 = 0;
    int l, temp = 0, flag;

    printf("\nEntre com a chave: \n");
    gets(ky);
    printf("\nEntre com o texto a ser criptografado: \n");
    gets(pt);

    startMatrix();
    removeSpaces();
    removeRepeated();
    equalizeLetters();
    saveKeyInMatrix();
    saveMatrixElements();
    printMatrix();
}

void startMatrix()
{
    char ky[50], pt[100], key[50];
    char m[5][5];
    char ch = 'a';
    int i = 0, j = 0, a = 0, b = 0, temp1 = 0;
    int l, temp = 0, flag;

    //start matrix in zero
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            m[i][j] = 0;
        }
    }
}

//Removendo espacos da chave
void removeSpaces()
{
    char ky[50], pt[100], key[50];
    char m[5][5];
    char ch = 'a';
    int i = 0, j = 0, a = 0, b = 0, temp1 = 0;
    int l, temp = 0, flag;

    while (ky[temp] != '\0')
    {
        if (ky[temp] == ' ')
        {
            l = strlen(ky);
            temp1 = temp;
            while (ky[temp1] != '\0')
            {
                ky[temp1] = ky[temp1 + 1];
                temp1++;
            }
            l--;
        }
        temp++;
    }
}

//Removendo elementos repetidos da chave e salvando numa chave nova
void removeRepeated()
{
    char ky[50], pt[100], key[50];
    char m[5][5];
    char ch = 'a';
    int i = 0, j = 0, a = 0, b = 0, temp1 = 0;
    int l, temp = 0, flag;

    while (ky[temp] != '\0')
    {
        flag = 0;
        for (a = 0; a <= temp; a++)
        {
            if (key[a] == ky[temp])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            key[temp1] = ky[temp];
            temp1++;
        }
        temp++;
    }
    key[temp1] = '\0';
}

void equalizeLetters()
{
    //Fazendo elementos i e j serem o mesmo
    char ky[50], pt[100], key[50];
    char m[5][5];
    char ch = 'a';
    int i = 0, j = 0, a = 0, b = 0, temp1 = 0;
    int l, temp = 0, flag;

    while (key[temp] != '\0')
    {
        if (key[temp] == 'i' || key[temp] == 'j')
        {
            for (a = 0; a < temp; a++)
            {
                if (key[a] == 'i' || key[a] == 'j')
                {
                    temp1 = temp;
                    while (key[temp1] != '\0')
                    {
                        key[temp1] = key[temp1 + 1];
                        temp1++;
                    }
                    key[temp1 - 1] = '\0';
                }
            }
        }
        temp++;
    }
}

void saveKeyInMatrix()
{
    //Salvando chave na matriz
    char ky[50], pt[100], key[50];
    char m[5][5];
    char ch = 'a';
    int i = 0, j = 0, a = 0, b = 0, temp1 = 0;
    int l, temp = 0, flag;

    while (key[temp] != '\0')
    {
        if (b == 5)
        {
            b = 0;
            a++;
        }
        m[a][b] = key[temp];
        temp++;
        b++;
    }
}

void saveMatrixElements()
{
    char ky[50], pt[100], key[50];
    char m[5][5];
    char ch = 'a';
    int i = 0, j = 0, a = 0, b = 0, temp1 = 0;
    int l, temp = 0, flag;

    //Salvando os elementos na matriz exceto pela chave
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            temp = 0;
            flag = 0;
            while (key[temp] != '\0')
            {
                if (key[temp] == ch)
                {
                    ch++;
                    flag = 1;
                    break;
                }
                if (ch == 'i' || ch == 'j')
                {
                    for (a = 0; a < temp; a++)
                    {
                        if (key[temp] == 'i' || key[temp] == 'j')
                        {
                            ch++;
                            flag = 1;
                            break;
                        }
                    }
                }
                temp++;
            }
            if (flag == 0 && m[i][j] == 0)
            {
                m[i][j] = ch;
                ch++;
                if (ch == 'i')
                    ch++;
            }
            if (m[i][j] == 0)
                j--;
        }
    }
}

void printMatrix()
{
    char ky[50], pt[100], key[50];
    char m[5][5];
    char ch = 'a';
    int i = 0, j = 0, a = 0, b = 0, temp1 = 0;
    int l, temp = 0, flag;

    //Mostra a matriz em tela
    printf("\n\nMatriz:\n\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("  %c", m[i][j]);
        }
        printf("\n");
    }
}