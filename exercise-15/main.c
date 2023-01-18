#include <stdio.h>
#include <stdlib.h>
//KULLANICIDAN ALINAN N TANE TAMSAYININ BELLEKTEN ALINMASI VE BELLEK UZERINDEN TOPLANMASI ve ORTALAMASI
int main()
{
    int *p;
    int N,i,toplam=0;

    printf("kac adet tamsayi girilecek: ");
    scanf("%d",&N);

    p=(int *)malloc(N*sizeof(int));

    printf("sayilari girin:\n");
    for(i=0;i<N;i++)
    {
        printf("%d. sayi:",i+1);
        scanf("%d",p+i);
        toplam+=*p+i;

    }
    printf("\n%d",toplam);

    printf("\nsayilarin ortalamasi: %.2f",(float)toplam/N);

    return 0;
}
