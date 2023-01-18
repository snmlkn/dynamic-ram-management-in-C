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

    //ptr =(int *)malloc(n*sizeof(int));//integer sayý türüne ayrýlan hafýzadan n tane hafýza blogunu int býr pointer isaretcisiyle ayýr
    ptr =(int *)calloc(n,sizeof(int));
    if(ptr== NULL)//eger alan ayýrýlmadýysa NULL döndüreceginden
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
