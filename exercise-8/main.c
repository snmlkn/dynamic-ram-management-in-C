#include <stdio.h>
#include <stdlib.h>
//RASTGELE URETILEN N ADET TAMSAYININ BELLEGE YAZILMASI VE KARESININ EKRANA BASTIRILMASI
int main()
{
    int *ptr;
    int N,i;
    srand(time(0));
    printf("enter N number to generate random number: ");
    scanf("%d",&N);

    ptr=(int *)malloc(N*sizeof(int));

    for(i=0;i<N;i++)
    {
        (*(ptr+i))=rand()%10;
        printf("number %d: %d \n",i+1,(*(ptr+i)));

    }
    printf("\n\n NUMBERS:\n");
    for(i=0;i<N;i++)
    {
        printf("number: %d \t squre: %d\n",(*(ptr+i)),((*(ptr+i))*(*(ptr+i))));
    }

    return 0;
}
