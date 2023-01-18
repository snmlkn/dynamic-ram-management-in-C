#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//ELEMAN SAYILARI KULLANICIDAN ALINAN IKI DIZININ FARKLI BIR BELLEK ALANINDA BIRLESTIRILMESI
int main()
{
    int N,M;
    int i;
    int *dizi1,*dizi2,*dizi3;
    int counter=0;
    printf("birinci dizi kac elemanli olsun:");
    scanf("%d",&N);
    printf("ikinci dizi kac elemanli olsun:");
    scanf("%d",&M);
    dizi1=(int *)malloc(N*sizeof(int));
    dizi2=(int *)malloc(M*sizeof(int));
    dizi3=(int *)malloc((N+M)*sizeof(int));
    //diziye rastgele eleman atama
    srand(time(0));
    printf("\ndizi1 elemanlari\n");
    for(i=0;i<N;i++)
    {
        *(dizi1+i)=rand()%20;
        printf("%3d",(*(dizi1+i)));
    }
    printf("\ndizi2 elemanlari\n");
    for(i=0;i<M;i++)
    {
        *(dizi2+i)=rand()%20;
        printf("%3d",(*(dizi2+i)));
    }
    printf("\nbirlestirme islemi sonrasi\n");
    for(i=0;i<N;i++)
    {
        *(dizi3+counter)=(*(dizi1+i));
        counter++;
    }

    for(i=0;i<M;i++)
    {
        *(dizi3+counter)=(*(dizi2+i));
        counter++;
    }

    for(i=0;i<N+M;i++)
    {
        printf("%d\n",(*(dizi3+i)));
    }
    free(dizi1);
    free(dizi2);
    free(dizi3);
    return 0;
}
