#include <stdio.h>
#include <stdlib.h>

void birlestir(int diza[],int dizb[],int dizc[],int x,int y)
{
    int i,j,sayac=0;
    for(i=0;i<x;i++)
    {
        dizc[sayac]=diza[i];
        sayac++;
    }
    for(j=0;i<y;j++)
    {
        dizc[sayac]=dizb[j];
        sayac++;
    }
}
int main()
{
    int n,k;
    printf("ilk dizi uzunlugunu giriniz\n");
    scanf("%d",&n);
    printf("diziyi giriniz\n");
    int dizi1[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&dizi1[i]);
    }
    printf("ikinci dizi uzunlugunu giriniz\n");
    scanf("%d",&k);
    printf("diziyi giriniz\n");
    int dizi2[k];
    for(int j=0;j<k;j++)
    {
        scanf("%d",&dizi2[j]);
    }
    int dizi3[n+k];
    birlestir(dizi1,dizi2,dizi3,n,k);
     for(int i=0;i<n+k;i++)
    {
        printf("%3d",dizi3[i]);
    }
    return 0;
}
