#include <stdio.h>
#include <stdlib.h>

int buyuk (int a, int b)
{
    if (a>b)
        return a;
    else if(b>a)
        return b;
    else
    {
        printf("esit amk\n");
        return 0;
    }

}

int main()
{
    int x,y;
    printf("sayilari giriniz\n");
    scanf("%d%d",&x,&y);
    printf("buyuk olan: %d",buyuk(x,y));
    return 0;
}
