#include <stdio.h>
#include <stdlib.h>
//GOSTRICININ DIZI OLARAK KULLANILMASI
int main()
{
    int array[10];
    int *ptr=(int *)malloc(10*sizeof(int));

    array[3]=5;
    ptr[3]=5;

    printf("array : %d\n",array[3]);
    printf("ptr : %d\n",ptr[3]);
    return 0;
}
