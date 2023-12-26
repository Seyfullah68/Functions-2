#include <stdio.h>
#include <stdlib.h>

int fak(int a)
{
    int i=1;
    while(a>0)
    {
        i=i*a;
        a--;
    }
    return i;

}
int main()
{
    int x;
    printf("bir sayi giriniz\n");
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        printf("%d!= %d\n",i,fak(i));
    }

    return 0;
}
