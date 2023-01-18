#include <stdio.h>
#include <stdlib.h>
//MATRISIN KOSEGEN DEGERLERININ TOPLAMINI VEREN PROGRAM
int main()
{
    int N,toplam;
    int i,j;
    printf("matris boyutu girin\n");
    scanf("%d",&N);
    int **bellek=(int **)malloc(N*sizeof(int *));
    for(i=0;i<N;i++)
    {
        bellek[i]=(int *)malloc(N*sizeof(int));
        for(j=0;j<N;j++)
        {
            printf("matris[%d][%d]:",i,j);
            scanf("%d",&bellek[i][j]);
        }

    }
    printf("\ngirilen matris\n");
     for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
          printf("%3d",bellek[i][j]);
        }
        printf("\n");
    }


    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
          if(i==j)
          {
              toplam=toplam+bellek[i][j];
          }
        }
    }
    printf("toplam: %d",toplam);
    return 0;
}
