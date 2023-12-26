#include <stdio.h>
#include <stdlib.h>

void floyd(int n)
{
    int i=1;
    int a=1;
    int sayi=1;
    while(i<=n)
    {
        while(a<=i){
            printf("%3d",sayi);
            a++;
            sayi++;
        }
        a=1;
        i++;

        printf("\n");
    }
}

int main()
{
    int satir;
    printf("satiri giriniz\n");
    scanf("%d",&satir);
    floyd(satir);
    return 0;
}
