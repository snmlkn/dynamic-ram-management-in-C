#include <stdio.h>
#include <stdlib.h>
//GOSTERICININ GOSTERICISI EGZERSIZ
/*
 int array[4][5];
    int i,j;

    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            array[i][j]=i*10+j+1;
            printf("%3d",array[i][j]);
        }
        printf("\n");
    }

*/
int main()
{
   int i,j;

   //dizinin g�stericisinin g�stericisi i�in bellek ay�rma
   //ay�r�lan bellek 4 sat�r� temsil eder
   int **m=(int **)calloc(4,sizeof(int *));


   //her bir sat�r i�in bellek ay�rma ve atama yapma

   for(i=0;i<4;i++)
   {
       m[i]=(int *)calloc(5,sizeof(int));
       for(j=0;j<5;j++)
       {
           m[i][j]=i*10+j+1;
           printf("%3d",m[i][j]);
       }
       printf("\n");
   }



















    return 0;
}
