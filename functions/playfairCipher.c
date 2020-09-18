void encrypt(char pt[], char mat[]);
void startMatrix();

int playfairCipher() {
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


}

void startMatrix() {
    int i = 0;
    //start matrix in zero
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            m[i][j] = 0;
        }
    }
}