#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//KLAVYEDEN GIRILEN BIR CUMLENIN TERSTEN OKUNUSU DINAMIK BELLEK KULLANARAK
int main()
{
    char *sentence;
    int i;
    sentence=(char *)calloc(50,sizeof(char));
    printf("enter any sentence: \n");
    gets(sentence);

    for(i=strlen(sentence)-1;i>=0;i--)
    {
        printf("%c",*(sentence+i));
    }
    free(sentence);
    return 0;
}
