#include <stdio.h>
#include <stdlib.h>
//KLAVYEDEN GIRILEN N ADET TAMSAYI ICIN BELLEKTEN YER AYIRMA OKUMA YAZMA
int main()
{
    int *ptr;
    int N,i;

    printf("enter the N number: ");
    scanf("%d",&N);

    ptr=(int *)malloc(N*sizeof(int));

    for(i=0;i<N;i++)
    {
        printf("number %d: ",i+1);
        scanf("%d",&(*(ptr+i)));
    }
    printf("\n\n");
    printf("numbers:\n");
    for(i=0;i<N;i++)
    {
        printf("%d\n",(*(ptr+i)));
    }

    return 0;
}
