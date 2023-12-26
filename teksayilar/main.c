#include <stdio.h>
#include <stdlib.h>

void teksayilar(int x)
{
    int i=1;
    for(i=1;i<=x;i++)
    {
        if(i%2==1)
            printf("%3d",i);
    }
}

int main()
{
    int a;
    printf("sayiyi giriniz\n");
    scanf("%d",&a);
    teksayilar(a);
    return 0;
}
