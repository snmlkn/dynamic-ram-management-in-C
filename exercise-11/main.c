#include <stdio.h>
#include <stdlib.h>
//KULLANICI TARAFINDAN GIRILEN N DEGERINE KADAR OLAN TEK CIFT SAYILARI FARKLI BELLEK BOLGERINDE TUTAN VE EKRANA BASTIRAN PROGRAM
int main()
{
    int *p1,*p2;
    int N,i;
    int tek=0;
    int cift=0;

    printf("enter N number:");
    scanf("%d",&N);

    p1=(int *)malloc(N/2*sizeof(int));
    p2=(int *)malloc(N/2*sizeof(int));

    for(i=0;i<N;i++)
    {
        if(i%2 == 0)
        {
            *(p1+cift)=i;
            cift++;
        }
        else
        {
            *(p2+tek)=i;
            tek++;
        }
    }

    printf("cift sayilar:\n");

    for(i=0;i<N/2;i++)
    {
        printf("%3d",(*(p1+i)));
    }

      printf("\ntek sayilar:\n");

    for(i=0;i<N/2;i++)
    {
        printf("%3d",(*(p2+i)));
    }
    free(p1);
    free(p2);
    return 0;
}
