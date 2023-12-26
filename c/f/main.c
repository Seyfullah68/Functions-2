#include <stdio.h>
#include <stdlib.h>
void fye(int x)
{
    int a=(1.8*x)+32;
    printf("%d",a);
}
void cye(int x)
{
    float a=(0.5555)*(x-32);
    printf("%f",a);
}
int main()
{
    char tur;

    printf("celcius icin c, fahtenayt icin f ye basiniz\n");
    scanf("%c",&tur);
    int deger;
    printf("degeri gir\n");
    scanf("%d",&deger);
    switch (tur)
    {
    case  'c':
        {
        fye(deger);
        break;
        }

    case  'f':
        {
            cye(deger);
            break;
        }
    default:
        {
            printf("yanlis secim");
            break;
        }
    }

    return 0;
}
