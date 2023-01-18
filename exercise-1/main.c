#include <stdio.h>
#include <stdlib.h>
//MALLOC() VE CALLOC() EGZERSIZ
/*
BELIRLI BIR ALAN AYIRMA VE O ALANA SAYI ATAMASI YAPMA
*/
int main()
{
    int *ptr;
    int n=5;
    int i;
    printf("sayi degeri: %d\n",n);

    //ptr =(int *)malloc(n*sizeof(int));//integer say� t�r�ne ayr�lan haf�zadan n tane haf�za blogunu int b�r pointer isaretcisiyle ay�r
    ptr =(int *)calloc(n,sizeof(int));
    if(ptr== NULL)//eger alan ay�r�lmad�ysa NULL d�nd�receginden
    {
        printf("alan ayirilamadi");
    }
    else
    {
        for(i=0;i<n;i++)
        {
            ptr[i]=i+1;
        }
        printf("atama islemi tamamlandi.\n");
        printf("atanan sayi degerleri:\n");
        for(i=0;i<n;i++)
        {
            printf("%d\t",ptr[i]);
        }
    }
    return 0;
}
