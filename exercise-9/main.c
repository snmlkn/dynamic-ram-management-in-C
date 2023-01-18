#include <stdio.h>
#include <stdlib.h>
//KULANICIDAN ALINAN IKI TAMSAYI ICIN AYRILAN BELLEK BOLGELERINDEN DEGERLERININ YER DEGISTIRMESI
int main()
{
    int *p1,*p2;
    int temp;
    p1=(int *)malloc(sizeof(int));
    p2=(int *)malloc(sizeof(int));

    printf("enter number 1: ");
    scanf("%d",&(*(p1)));
    printf("enter number 2: ");
    scanf("%d",&(*(p2)));
    printf("before\n");
    printf("number1: %d \t number2: %d\n",(*(p1)),(*(p2)));

    temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("After\n");
    printf("number1: %d \t number2: %d\n",(*(p1)),(*(p2)));
    free(p1);
    free(p2);

    return 0;
}
