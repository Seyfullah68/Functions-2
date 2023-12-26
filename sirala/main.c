#include <stdio.h>
#include <stdlib.h>

void sirala(int a[],int sayi)
{
    int x=sayi;
    int tut;
    for(int i=0;i<sayi;i++)
    {
        for(int j=0;j<x;j++)
        {
            if(a[j]>a[j+1])
            {
                tut=a[j+1];
                a[j+1]=a[j];
                a[j]=tut;
            }
        }
        x--;
    }

}

int main()
{
    int n;
    printf("kac adet sayi olacak\n");
    scanf("%d",&n);
    int dizi[n];
    srand(time(0));
    for(int i=0;i<n;i++)
    {
        dizi[i]=rand()%100;
        printf("%3d",dizi[i]);
    }
    printf("\n");
    sirala(dizi,n);
    for(int i=0;i<n;i++)
    {
        printf("%3d",dizi[i]);
    }
    return 0;
}
