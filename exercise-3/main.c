#include <stdio.h>
#include <stdlib.h>
//REALLOC() KULLLANIMI
int main()
{
    int n=5,i;
    int *ptr;

    ptr=(int *)malloc(n*sizeof(int));
    printf("sayi degeri:%d\n",n);
    if(ptr == NULL)
    {
        printf("alan olsuturulamadi");
        exit(0);
    }
    else
    {
        for(i=0;i<n;i++)
        {
            ptr[i]=i+1;
        }
        printf("atama islemi yapildi\n");
        printf("Elemanlar:\n");
        for(i=0;i<n;i++)
        {
            printf("%d\n",ptr[i]);
        }
        n=10;
        printf("sayi degeri: %d\n",n);
        realloc(ptr,n*sizeof(int));
        for(i=5;i<n;i++)
        {
            ptr[i]=i+1;
        }
        printf("realloc islemi yapildi\n");
        printf("Elemanlar:\n");
        for(i=0;i<n;i++)
        {
            printf("%d\n",ptr[i]);
        }
        free(ptr);
        printf("hafiza alani serbest birakildi\n");
    }
    return 0;
}
