#include <stdio.h>
#include <stdlib.h>

int tekcift (int x)
{
    if(x%2==0)
        return 1;
    else
        return 0;
}

int main()
{
    int a;
    printf("sayiyi giriniz\n");
    scanf("%d",&a);
    int b=tekcift(a);
    if(b==1)
        printf("cift");
    else
        printf("tek");
    return 0;
}
