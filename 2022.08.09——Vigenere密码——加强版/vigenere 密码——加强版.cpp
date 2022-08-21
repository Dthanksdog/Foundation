#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


void encrypt(char* text, char* result, char* k)
{
    int i, j = 0;
    int m = strlen(k);
    int l = strlen(text);

    for (i = 0; i < l; i++)
    {

        if (text[i] >= 'A' && text[i] <= 'Z')
        {
            if (j == m)
            {
                j = 0;
                result[i] = (text[i] - 'A' + k[j] - 'A') % 26 + 'A';
            }
            else
            {
                result[i] = (text[i] - 'A' + k[j] - 'A') % 26 + 'A';
            }
            j++;
        }
        else if (text[i] >= 'a' && text[i] <= 'z')
        {
            if (j == m)
            {
                j = 0;
                result[i] = (text[i] - 'a' + k[j] - 'a') % 26 + 'a';
            }
            else
            {
                result[i] = (text[i] - 'a' + k[j] - 'a') % 26 + 'a';
            }
            j++;
        }
        else
        {
            result[i] = text[i];
        }

    }

}


void decrypt(char* text, char* result, char* k)
{
    int i, j = 0;
    int l = strlen(text);
    int m = strlen(k);

    for (i = 0; i < l; i++)
    {
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            if (j == m)
            {
                j = 0;
                result[i] = (text[i] - k[j] + 26) % 26 + 'a';
            }
            else
            {
                result[i] = (text[i] - k[j] + 26) % 26 + 'a';
            }
            j++;
        }
        else if (text[i] >= 'A' && text[i] <= 'Z')
        {
            if (j == m)
            {
                j = 0;
                result[i] = (text[i] - k[j] + 26) % 26 + 'A';
            }
            else
            {
                result[i] = (text[i] - k[j] + 26) % 26 + 'A';
                j++;
            }
        }
        else
        {
            result[i] = text[i];
        }
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