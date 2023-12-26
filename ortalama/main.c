#include <stdio.h>
#include <stdlib.h>

float ortalama(int *seri,int adet)
{
    float toplam, ort;
    toplam=0;
    for(int j=0;j<adet;j++)
    {
        toplam=toplam+seri[j];
    }
    ort=toplam/(float)adet;
    return ort;
}

int main()
{
    int n;
    printf("dizi kac elemanli olacak giriniz\n");
    scanf("%d",&n);
    int dizi[n];
    for(int i=0;i<n;i++)
    {
        printf("%d inci elemani giriniz\n",i+1);
        scanf("%d",&dizi[i]);
    }
    float a=ortalama(dizi,n);
    printf("ortalama= %f",a);
    return 0;
}
