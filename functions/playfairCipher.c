void encrypt(char pt[], char mat[]);
void startMatrix();

int playfairCipher()
{
    char ky[50], pt[100], key[50];
    char m[5][5];
    // char mat[25];
    char ch = 'a';
    int i = 0, j = 0, a = 0, b = 0, temp1 = 0;
    int l, temp = 0, flag;

    printf("\nEntre com a chave: \n");
    gets(ky);
    printf("\nEntre com o texto a ser criptografado: \n");
    gets(pt);

    startMatrix();
    removeSpaces();
}

void startMatrix()
{
    int i = 0, j = 0;
    char m[5][5];
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
    int temp = 0;
    char ky[50],
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
    int temp = 0;
    temp = 0;
    temp1 = 0;
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