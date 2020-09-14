#include "headerlib/cryptolib.h"

int main(int argc, char* argv[]) {
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
        printf("3 - EXIT;\n\n");
 
        scanf("%d",&choice);
        fflush(stdin);
 
        switch(choice)
        {
            case 1 : caesarEncrypt();
                     break;
            case 2 : caesarDecrypt();
                     break;
        }
        printf("\n");
        getchar();
    }
    while(choice!=3);
}