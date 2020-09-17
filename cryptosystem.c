#include "headerlib/cryptolib.h"

int main(void) {
	MessageBox(0,"Hello! Welcome to CryptoLibrary!","Welcome Message",1);
    MessageBox(0,"This library was created for studying purposes only.","Disclaimer",1);
    MessageBox(0,"If you have any enquiries, feel free to contact me at: daidson.alves@gmail.com","Contact",1);
    MessageBox(0,"Now let's go to the command line!","Program Start",1);

    system("cls");
    int choice;

    do
    {
        
        system("cls");
        printf("Pick one option from the next ones:\n\n");
        printf("1 - Caesar Cypher Encryption;\n");
        printf("2 - Caesar Cypher Decryption;\n");
        printf("3 - Alphabetic Cipher;\n");
        printf("4 - EXIT;\n\n");
 
        scanf("%d",&choice);
        fflush(stdin);
 
        switch(choice)
        {
            case 1 : caesarEncrypt();
                     getchar();
                     break;
            case 2 : caesarDecrypt();
                     getchar();
                     break;
            case 3 : alphabeticCipher();
            getchar();
            break;
        }
        printf("\n");
        
    }
    while(choice!=4);
}