#include <stdio.h>
#include <stdlib.h>
//RASTGELE URETILEN N TANE TAMSAYININ BELLEGE VE BIR TXT DOSYASINA VE ORADAN EKRANA BASTIRILMASINI SAGLAYAN PROGRAM
int main()
{
    int N,i,c;
    int *ptr;
    srand(time(0));
    printf("N tamsayisini girin: ");
    scanf("%d",&N);
    FILE *dosya;
    dosya=fopen("sayi.txt","w");
    ptr=(int *)malloc(N*sizeof(int));

    for(i=0; i<N; i++)
    {
        *(ptr+i)=rand()%10;
        printf("number %d: %d\n",i+1,(*(ptr+i)));
        fprintf(dosya,"sayi %d: %d\n",i+1,(*(ptr+i)));

    }

    fclose(dosya);
    dosya=fopen("sayi.txt","r");

    do
    {
        c=getc(dosya);
        if(c !=EOF)
        {
            putchar(c);
        }

    }while(c!=EOF);

    fclose(dosya);
    printf("islem tamamlandi");
    free(ptr);

    return 0;
}
