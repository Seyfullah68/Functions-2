#include <stdio.h>
#include <stdlib.h>

void floyd (int a)
{
    int y=1;
    int z=0;
    int i=1;

    while(i<=a)
    {


        while(z<y)
        {
            printf("%3d",i);
            z++;
            i++;

        }
        z=0;
        y++;
        printf("\n");
    }

}


int main()
{
    int x;
    printf("bir sayi giriniz\n");
    scanf("%d",&x);
    floyd(x);
    return 0;
}
