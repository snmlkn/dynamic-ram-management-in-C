#include <stdio.h>
#include <stdlib.h>
//MALLOC VEYA CALLOC ILE AYRILAN HAFIZA ALANINDA DEGER ATAMASINDAN ONCE GARBAGE DEGER TUTULUR
//MALLOC VE CALLOC ICIN BIR DEIGER HAFIZA ALANI AYIRMA SEKLI
int main()
{
    int *p;
    //hafiza atama yöntemi
    //p=(int *)malloc(5*sizeof(int));
    //bir diger hafiza atama yöntemi
    p=(int *)malloc(40);
    printf("malloc hafiza alani degeri: %d\n",p);
    p=20;
    printf("atama sonrasi malloc hafiza alani degeri: %d\n",p);
    return 0;
}
