#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


void encrypt(char* text, char* result, char* k)
{
    int l, i;
    for (l = 0; text[l] != '\0'; l++);
    for (i = 0; i < l; i++)
    {
        result[i] = (text[i] - 'a' + k[i] - 'a') % 26 + 'a';
    }
    
}


void decrypt(char* text, char* result, char* k)
{
    int l, i;
    for (l = 0; text[l] != '\0'; l++);
    for (i = 0; i < l; i++)
    {
        result[i] = (text[i] - k[i] + 26) % 26 + 'a';
    }
}



int main()
{
    char text[50] = "";
    char result[50] = "";
    char k[50] = "";
    int type;
    printf("--------welcome to use Vigenere cipher-----------\n");
    printf("Please enter the plain or ciphertext\n");
    scanf("%[^\n]", text);
    printf("Select an encryption mode. Enter 1 for encryption and 2 for decryption\n");
 again:
    scanf("%d", &type);
    printf("please enter the key\n");
    scanf("%s", k);

    if (type == 1) 
    {
        /**¼ÓÃÜ**/
        encrypt(text, result, k);
        printf("the plain %s 's ciphertext is %s\n", text, result);
    }
    else if (type == 2) {
        /**½âÃÜ**/
        decrypt(text, result, k);
        printf("ciphertext %s 's plain is %s\n", text, result);
    }
    return 0;
   
}