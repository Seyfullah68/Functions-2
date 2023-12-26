#include <stdio.h>
#include <stdlib.h>

int ussu(int tbn, int us)
{
    int a=0;
    int sayi=1;
    while(a < us)
    {
        sayi=sayi*tbn;
        a++;
    }
    return sayi;
}

int main()
{
    int x,y;
    printf("lutfen taban ve ussu sirasi ile giriniz\n");
    scanf("%d%d",&x,&y);
    printf("%d",ussu(x,y));
    return 0;
}
