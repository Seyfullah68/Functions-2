#include <stdio.h>
#include <stdlib.h>

void ekle (int dizi[],int n,int sayi,int sira)
{
    for(int i=n+1;i>=sira-1;i--)
    {
        if(i==sira-1)
        {
            dizi[i]=sayi;
        }
        else
            dizi[i]=dizi[i-1];
    }

}

int main()
{
    int n;
    printf("kac adet sayi olacak\n");
    scanf("%d",&n);
    int dizi[n];
    srand(time(0));
    printf("dizimiz:\n");
    for(int i=0;i<n;i++)
    {
        dizi[i]=rand()%100;
        printf("%3d",dizi[i]);
    }
    printf("\n");
    int sayi,sira;
    printf("hangi sayiyi kacinciya ekleyeceksiniz\n");
    scanf("%d%d",&sayi,&sira);
    ekle(dizi,n,sayi,sira);
     for(int i=0;i<=n;i++)
    {
        printf("%3d",dizi[i]);
    }
    return 0;
}
