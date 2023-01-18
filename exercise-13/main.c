#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//RASTGELE URETILEN N ADET SAYININ OLUSTURULMASI,SIRALAMASI,EN BUYUK DEGERI FONKSIYON ILE OLUSTURAN PROGRAM

void dizi_olustur(int *p,int N)
{

    int i;
    for(i=0;i<N;i++)
    {
        *(p+i)=rand()%20;
        printf("%3d",(*(p+i)));

    }
}

void dizi_sirala(int *p,int N)
{
    int i,j;
    int gecici;
    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-i-1;j++)
        {
            if(p[j]>p[j+1])
            {
                gecici=p[j];
                p[j]=p[j+1];
                p[j+1]=gecici;
            }
        }
    }
    printf("\n\nsiralanmis hali\n");
    for(i=0;i<N;i++)
    {
        printf("%3d",p[i]);
    }
    printf("\n");

}
void dizi_enb(int *p,int N)
{
    int i,enb;
    enb=p[0];
    for(i=1;i<N;i++)
    {
        if(enb< p[i])
        {
            enb=(p[i]);
        }
    }
    printf("\n En buyuk sayi:%d",enb);
}

int main()
{
    srand(time(0));
    int N;
    int *p;
    printf("kac adet sayi olusturulsun:\n");
    scanf("%d",&N);

    p=(int *)malloc(N*sizeof(int));

    dizi_olustur(p,N);
    dizi_sirala(p,N);
    dizi_enb(p,N);
    return 0;
}
