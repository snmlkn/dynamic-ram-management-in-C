#include <stdio.h>
#include <stdlib.h>
//BIR MATRIS ICIN BELLEKTEN YER AYRILMASI VE EKRANA BASILMASI
int main()
{
    int N,M;
    //int matris[N][M];
    int i,j;
    printf("N satir sayisini girin\n");
    scanf("%d",&N);
    printf("M sutun sayisini girin\n");
    scanf("%d",&M);
    int **matris=(int **)malloc(N*sizeof(int *));

    for(i=0;i<N;i++)
    {
        matris[i]=(int *)malloc(M*sizeof(int));
        for(j=0;j<M;j++)
        {
            printf("matris[%d][%d]: ",i,j);
            scanf("%d",&matris[i][j]);
        }
    }

       for(i=0;i<N;i++)
    {

        for(j=0;j<M;j++)
        {
            printf("%3d",matris[i][j]);

        }
        printf("\n");
    }
    //matrisde mesgul edilen haafizayi serbest birakmak icin
    for(i=0;i<N;i++)
    {
        free((void *)matris[i]);//satirlari bosalt
    }
    free((void *)matris);//matrisi bosalt

    return 0;
}
