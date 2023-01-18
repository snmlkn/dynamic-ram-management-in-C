#include <stdio.h>
#include <stdlib.h>
//KULLANICIDAN ALINAN BIR CUMLENIN DINAMIK BELLEK UZERINDEN OKUNMASI
int main()
{
    char *sentence;

    sentence=(char *)malloc(100*sizeof(char));

    printf("enter a sentence: ");
    gets(sentence);
    printf("\n%s",sentence);
    return 0;
}
