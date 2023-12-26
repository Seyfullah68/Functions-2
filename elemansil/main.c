#include <stdio.h>
#include <stdlib.h>

void cikar(int seri[],int x,int y)
{
    if(y>x)
    {
        printf("hataa\n");
    }
    else
    {
        for(int j=y-1;j<x-1;j++)
        {
            seri[j]=seri[j+1];
        }
    }
    for(int i=0;i<x-1;i++)
    {
        printf("%3d",seri[i]);
    }
}
int main()
{
    int a;
    int n;
    printf("kac sayi olacak\n");
    scanf("%d",&a);
    int dizi[a];
    srand(time(0));
    printf("dizimiz:\n");
    for(int i=0;i<a;i++)
    {
        dizi[i]=rand()%100;
        printf("%3d",dizi[i]);
    }
    printf("\n");
    printf("kacinci sayi silinecek\n");
    scanf("%d",&n);
    cikar(dizi,a,n);

    return 0;
}
