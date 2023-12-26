#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int hesapla(int x)
{
    int toplam=0;
    for(int i=1;i<=x;i++)
    {
        toplam+=pow(i,2);
    }
    return toplam;
}

int main()
{
    int a;
    printf("sayiyi giriniz\n");
    scanf("%d",&a);
    printf("%d",hesapla(a));
    return 0;
}
