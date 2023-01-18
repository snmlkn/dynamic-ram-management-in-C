#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//KLAVYEDEN GIRILEN KELIMEYI UCGEN SEKLINDE BASTIRMA DINAMIK BELLEK KULLANARAK
int main()
{   char *text;
    int i=0,j=0;
    text=(char *)calloc(50,sizeof(char));
    printf("enter the text to show triangle\n");
    gets(text);

    while(i<strlen(text))
    {
        j=0;
        while(j<=i)
        {
            printf("%c",*(text+j));
            j++;
        }
        printf("\n");
        i++;
    }
    free(text);
    return 0;
}
