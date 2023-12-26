#include <stdio.h>
#include <stdlib.h>

void baklavaust(int satir)
{
    int bosluk=satir-1;
    int i,j;
    for(i=1;i<=satir;i++)
    {
        for(j=1;j<=bosluk;j++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("c");
        }
        bosluk--;
        printf("\n");
    }
}
void baklavalt(int satir)
{
    int i,j;
    int bosluk=1;
    int sat=satir;
    for(i=1;i<satir;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }

        for(j=1;j<=2*(sat-i)-1;j++)
        {
            printf("+");
        }

        printf("\n");
    }
}


int main()
{
    int n;
    printf("kac satir olacak\n");
    scanf("%d",&n);
    baklavaust(n);
    baklavalt(n);
    return 0;
}
