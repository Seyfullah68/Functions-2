#include <stdio.h>
#include <stdlib.h>


void ust(char kar, int sat)
{
    int i,j;
    for(i=0;i<sat;i++)
    {
        for(j=0;j<i;j++)
        {

                printf(" ");

        }
        for(j=0;j<(2*sat)-1-2*i;j++)
        {
            printf("%c",kar);
        }

        printf("\n");
    }
}
void alt(char kar,int sat)
{
    int i,j;
    for(i=0;i<sat;i++)
    {
        for(j=0;j<sat-i-1;j++)
        {
            printf(" ");
        }
        for(j=0;j<2*i+1;j++)
        {
            printf("%c",kar);
        }
        printf("\n");
    }
}
int main()
{
    char x;
    printf("karakteri giriniz\n");
    scanf("%c",&x);
    int satir;
    printf("satir sayisi\n");
    scanf("%d",&satir);
    ust(x,satir);
    alt(x,satir);
    return 0;
}
