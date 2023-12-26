#include <stdio.h>
#include <stdlib.h>

int fak(int x)
{
    int y=1;
    while(x>0)
    {
        y=y*x;
        x--;
    }
    return y;
}
int main()
{
    int a;
    printf("faktoriyeli hesaplanacak sayiyi giriniz\n");
    scanf("%d",&a);
    printf("%d",fak(a));
    return 0;
}
