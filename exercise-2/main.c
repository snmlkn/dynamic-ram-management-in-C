#include <stdio.h>
#include <stdlib.h>
//FREE FONKSIYONU KULLANIMI
int main()
{
    //pointerlar� tan�mlama
    int *ptr,*ptr1;
    //bir de�iskene deger atamas� yapma
    int n=5;
    //calloc ve malloc ile haf�za alan� ay�rma
    ptr=(int *)malloc(n*sizeof(int));
    ptr1=(int *)calloc(n,sizeof(int));

    if(ptr == NULL || ptr1 == NULL)
    {
        printf("hafiza alan� ayirilamadi\n");
    }
    else
    {
        //hafiza alanlarinin ayirilma ve basalilma asamalarinin kontrolu
        printf("ptr ile malloc hafiza alani ayirildi\n");
        free(ptr);
        printf("ptr ile malloc hafiza alani bosaltildi\n");
        printf("\n\n");
        printf("ptr1 ile calloc hafiza alani ayirildi\n");
        free(ptr1);
        printf("ptr1 ile calloc hafiza alani bosaltildi\n");
    }
    return 0;
}
