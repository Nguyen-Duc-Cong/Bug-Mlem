#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#define MAX 50
int main()
{
    int nVowels, nConsonants, nOthers;
    char ch[MAX];
    scanf("%s",&ch); //"mlem kamehameha mlem";
    //----------------------------------
    int len = strlen(ch);
    for (int i = 0; i <= len; i++)
    {
        int c = toupper(ch[i]);
        if (c >= 'A' && c <= 'Z')
        {
            switch (ch[i])//---------------------------
            {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            {
                nVowels++;
                break;
            }
            default:
                nConsonants++;
            }
        }
        else
            nOthers++;
    }
    printf("\nprint out nVowels: %d", nVowels);
    printf("\nprint out nConsonants: %d", nConsonants);
    printf("\nPrint out nOthers: %d", nOthers );//--------------
    getch();
    return 0;
}
