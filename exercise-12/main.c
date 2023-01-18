#include <stdio.h>
#include <stdlib.h>
//KULLANICI TARAFINDAN URETILEN N ADET SAYININ EN BUYUGUNU BULAN PROGRAM
int main()
{
    int *ptr;
    int N,i,big=0;
    srand(time(0));
    printf("enter N number: ");
    scanf("%d",&N);

    ptr=(int *)malloc(N*sizeof(int));

    for(i=0;i<N;i++)
    {
        *(ptr+i)=rand()%10;
        printf("sayi %d: %d\n",i+1,(*(ptr+i)));
    }
    printf("\n\n");
    for(i=0;i<N;i++)
    {
        if((*(ptr))<(*(ptr+i)))
        {
            big=(*(ptr+i));
        }
        else
        {
            big=(*(ptr));
        }
    }

    printf("Bigger Number: %d",big);
    return 0;
}
