#include <stdio.h>
#include <stdlib.h>

int topla(int a,int b)
{
    return a+b;
}
int main()
{
    int x,y;
    printf("sayilari gir\n");
    scanf("%d %d",&x,&y);
    printf("%d",topla(x,y));
    return 0;
}
