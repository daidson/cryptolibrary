#include "cryptolib.h"
#include<windows.h>

int main(void) {
	MessageBox(0,"Hello! Welcome to the CryptoLibrary!","Welcome Message",1);
    MessageBox(1,"This library was created for studying purposes only.","Disclaimer",2);
    MessageBox(2,"If you have any enquiries, feel free to contact me at:\ndaidson.alves@gmail.com","Contact",3);
    caesarEncrypt();
}