#include <stdio.h>
#include <stdlib.h>

int buyuk(int seri[],int x)
{
    int i=seri[0];
    for(int j=1;j<x;j++)
    {
        if(seri[j]>i)
        {
            i=seri[j];
        }
    }
    return i;
}
int kucuk(int seri[],int x)
{
    int i=seri[0];
    for(int j=1;j<x;j++)
    {
        if(seri[j]<i)
        {
            i=seri[j];
        }
    }
    return i;
}



int main()
{
    int n;
    printf("eleman sayisini giriniz\n");
    scanf("%d",&n);
    int dizi[n];
    srand(time(0));
    for(int i=0;i<n;i++)
    {
        dizi[i]=rand()%100;
        printf("%3d",dizi[i]);
    }
    printf("\n");
    printf("en buyuk : %d \n",buyuk(dizi,n));
    printf("en kucuk : %d \n",kucuk(dizi,n));


    return 0;
}
